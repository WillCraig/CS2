////////////////////////////////////////////////////////////////////
//  ASTree.cpp
//  Abstract Syntax Tree
//
//  Created by Jonathan Maletic
//  Copyright 2021 Kent State University. All rights reserved.
//  Fall 2021
//  srcML 1.0
//
//  Modified by:   William Craig
//
//

#include "ASTree.hpp"
#include <iostream>
#include <vector>

/////////////////////////////////////////////////////////////////////
// Copy constructor for srcML
//
srcML::srcML(const srcML& actual) {
    header = actual.header;
    if (actual.tree)
        tree   = new AST(*(actual.tree));
    else
        tree = 0;
}

/////////////////////////////////////////////////////////////////////
// Constant time swap for srcML
//
void srcML::swap(srcML& b) {
    std::string t_header = header;
    header = b.header;
    b.header = t_header;
    
    AST *temp = tree;
    tree = b.tree;
    b.tree = temp;


}

/////////////////////////////////////////////////////////////////////
// Assignment for srcML
//
srcML& srcML::operator=(srcML rhs) {
    swap(rhs);
    return *this;
}

/////////////////////////////////////////////////////////////////////
// Reads in and constructs a srcML object.
//
std::istream& operator>>(std::istream& in, srcML& src){
    char ch;
    if (!in.eof()) in >> ch;
    src.header = readUntil(in, '>');
    if (!in.eof()) in >> ch;
    if (src.tree) delete src.tree;
    src.tree = new AST(category, readUntil(in, '>'));
    src.tree->read(in);
    return in;
}

/////////////////////////////////////////////////////////////////////
// Prints out a srcML object
//
std::ostream& operator<<(std::ostream& out, const srcML& src){
    if (src.tree) src.tree->print(out);
    return out;
}

/////////////////////////////////////////////////////////////////////
//  Adds in the includes and profile object declarations
//
void srcML::mainHeader(const std::vector<std::string>& profileName,
                       const std::vector<std::string>& fileName    ) {
    tree->mainHeader(profileName, fileName);
}

/////////////////////////////////////////////////////////////////////
//  Adds in the includes and declares profile object declarations
//
void srcML::fileHeader(const std::string& profileName) {
    tree->fileHeader(profileName);
}

/////////////////////////////////////////////////////////////////////
// Adds in the report to the main
//
void srcML::mainReport(const std::vector<std::string>& profileName) {
        tree->mainReport(profileName);
}

/////////////////////////////////////////////////////////////////////
//  Inserts a profile.count() into each function body.
//
void srcML::functionCount(const std::string& profileName) {
    tree->functionCount(profileName);
}

/////////////////////////////////////////////////////////////////////
// Inserts a profile.count() for each statement.
//
void srcML::lineCount(const std::string& profileName) {
    tree->lineCount(profileName);
}


/////////////////////////////////////////////////////////////////////
// Constructs a category, token, or whitespace node for the tree.
//
AST::AST(nodes t, const std::string& s) {
    nodeType = t;
    switch (nodeType) {
        case category:
            tag = s;
            break;
        case token:
            text = unEscape(s);
            break;
        case whitespace:
            text = s;
            break;
    }
}


/////////////////////////////////////////////////////////////////////
// Destructor for AST
// 
AST::~AST() {
    //Recursively traverse tree and delete from bottom up

    // iterate through child list, i as each item in list;
    for (AST* i : child) {
        // delete i will call this destructor function again on all child lists
        
        delete i;
    }
}


/////////////////////////////////////////////////////////////////////
// Copy Constructor for AST
//
AST::AST(const AST& actual) {
    //Recursively traverse actual and
    //make a copy of each node putting it
    //into this.

    // Copy direct non-list entities.
    nodeType = actual.nodeType;
    tag      = actual.tag;
    closeTag = actual.closeTag;
    text     = actual.text;

    for (AST* i : actual.child) { 
        // the new will call this function again for the children of current.
        child.push_back(new AST(*i));
    }
    
}


/////////////////////////////////////////////////////////////////////
// Constant time swap for AST
//
void AST::swap(AST& rhs) {
    //Swap all the top level childern (pointers to AST)

    AST temp = rhs;

    rhs.nodeType = nodeType;
    rhs.tag      = tag;
    rhs.closeTag = closeTag;
    rhs.child    = child;
    rhs.text     = text;

    nodeType = temp.nodeType;
    tag      = temp.tag;
    closeTag = temp.closeTag;
    child    = temp.child;
    text     = temp.text;
}

/////////////////////////////////////////////////////////////////////
// Assignment for AST
//
AST& AST::operator=(AST rhs) {
    swap(rhs);
    return *this;
}


/////////////////////////////////////////////////////////////////////
// REQUIRES: this->nodetype == category && tagName is valid srcML tag
// ENSURES: RETVAL == this->child[i] where this->child[i]->tag == tagName
//
// IMPORTANT for milestone 2 and 3
//
AST* AST::getChild(std::string tagName) {
    std::list<AST*>::iterator ptr = child.begin();
    while (((*ptr)->tag != tagName) && (ptr != child.end())) {
         ++ptr;
    }
    return *ptr;
}


/////////////////////////////////////////////////////////////////////
// REQUIRES: this->tag == "name"
// Returns the full name of a <name> node
//  There are two types of names in srcML.  A simple name (e.g., foo) and a
//   name with a scope (e.g., std::bar).  This returns the correct
//   one from <name> AST node.
//
// IMPORTANT for milestone 3
//
std::string AST::getName() const {
    std::string result;
    if (child.front()->tag != "name") {
        result = child.front()->text;   //A simple name (e.g., main)
    } else {                            //A complex name (e.g., stack::push).
        result = child.front()->child.front()->text;
        result += "::";
        result += child.back()->child.front()->text;
    }
    return result;
}



/////////////////////////////////////////////////////////////////////
//  Adds above the main, in the main file:
//  1. #include "profile.hpp"
//  2. All needed profile object declarations
//      example: profile foo_cpp("foo.cpp");
//
void AST::mainHeader(const std::vector<std::string>& profileName,
                     const std::vector<std::string>& fileName     ) {

    //Skip down a couple lines or find main and put it before it
    //Add a node with #include "profile.hpp"
    //For each file profile name, add a node with a profile
    //   declaration "profile foo_cpp("foo.cpp");"

    //              include part
    // find line before first function
    std::list<AST*>::iterator preFunctionMain = child.begin();
    while ((*preFunctionMain)->tag != "function") {
        ++preFunctionMain;
    }
    // insert before first function in main.
    child.insert(preFunctionMain, new AST(token, "#include \"profile.hpp\"\n"));

    // insert the profile statements.
    // iterate through list of files to profile
    std::vector<std::string>::const_iterator currentFileName = fileName.begin();
    for (std::string currentProfileName : profileName) {
        
        // insert
        // ex: profile simple_cpp("simple.cpp");
        child.insert(preFunctionMain, new AST(token, ("profile " + currentProfileName + "(\"" + (*currentFileName) + "\")" + ";\n")));

        ++currentFileName;
    }
    child.insert(preFunctionMain, new AST(token, "\n"));
}


/////////////////////////////////////////////////////////////////////
//  Adds in each file (except main file):
//  1. #include "profile.hpp"
//  2. All needed external profile object declarations
//      example: extern profile thisfile_cpp;
//
void AST::fileHeader(const std::string& profileName) {
    //Add #include "profile.hpp"
    //Add in the external declaration for that file "extern profile foo_cpp;"


    // find line before first function
    std::list<AST*>::iterator preFunctionMain = child.begin();
    while ((*preFunctionMain)->tag != "function") {
        ++preFunctionMain;
    }
    // insert before first function in main.

    std::string ins = "\n#include \"profile.hpp\"\nextern profile " + profileName + ";\n";
    child.insert(preFunctionMain, new AST(token, ins));
}


/////////////////////////////////////////////////////////////////////
// Adds in the report to the main file
// Assumes only one return in the main
//
void AST::mainReport(const std::vector<std::string>& profileName) {
    //Find the function with name of "main" in the file
    // -Get the "block" node of this function
    // -Set an iterator to the child.end() of "block"
    // -Decrement it once (to skip the "}")
    // -Search backwards for a "return" tag
    // -Insert the report statements before the return


    for (AST* childItr : child) {
        // look for function named "main"
        //      check tag is a function AND
        //      get childItr, child name, and next front content, if main, true.
        if (childItr->tag == "function" && childItr->getChild("name")->child.front()->text == "main") {

    
            // this will take us to the end of the block content child, the location of return
            std::list<AST*>::iterator block_content_itr = childItr->getChild("block")->getChild("block_content")->child.end(); --block_content_itr;

            // search block content end to begin looking for "return" tag
            while ((*block_content_itr)->tag != "return") {
                --block_content_itr;
            }
            // now, block_content_itr is the location right above return.

            

            // for each profilename in the passed vector, add output statement + newline to line to be inserted
            for (std::string names : profileName) {
                // insert line: std::cout << " + names + " << std::endl;
                // where for each item names, in vector set profileName
                childItr->getChild("block")->child.insert(block_content_itr, new AST(token, ("std::cout << " + names + " << std::endl;\n\t")));
            }
            
            // break loop, main has been found and altered.
            break;
        }
    }
}


/////////////////////////////////////////////////////////////////////
// Adds a node to the function block to count the times each function
//  is executed
//  Assumes no nested functions
//
void AST::functionCount(const std::string& profileName) {
    // for each child in the "unit"
    //     if child is a function, constructor, destructor
    //        Find the function name (use AST::getName())
    //        Find <block>, then find <block_content>
    //        Insert the count as first child in <block_content>
    //        Example: main1_cpp.count(__LINE__, "main");


    for (AST* childItr : child) {
        // find functions, constructors, destructors, and expr_stmt
        //if (true) { // used for testing challenge theory.
        if (childItr->tag == "function" || childItr->tag == "constructor" || childItr->tag == "destructor" || childItr->tag == "expr_stmt" || childItr->tag == "block" || childItr->tag == "call") {
            
            // set functionLine to immediately after the first "{" 
            std::list<AST*>::iterator functionLine = childItr->getChild("block")->child.begin();
            while ((*functionLine)->text != "{") {
                ++functionLine;
            }
            ++functionLine;
            // location set...
            
            // insert the count line...
            // insert profileName_cpp.count(__LINE__), "profileName");
            childItr->getChild("block")->child.insert(functionLine, new AST(token, (" " + profileName + ".count(__LINE__, \"" + childItr->getChild("name")->child.front()->text + "\");\n")));
        }
    }
}


/////////////////////////////////////////////////////////////////////
// Adds in a node to count the number of times each statement is executed
//   Do not count breaks, returns, throw, declarations, etc.
//   Assumes all construts (for, while, if) have an explicit block { }
//
void AST::lineCount(const std::string& profileName) {
    // Recursively check for expr_stmt within all category nodes <block>
    // Very similar to AST::print
    // For each child:
    //   If it is a category node
    //       If it is a expr_stmt insert a count after it
    //          Example: foo_cpp.count(__LINE__);
    //       Else call lineCount if not a stop tag  See isStopTag()
    //   Else (token or whitespace) do nothing

    
    for (AST* childItr : child) {
        // if current child->child is NOT empty
        if (!childItr->child.empty()) {
            // call recursively
            childItr->lineCount(profileName);
        }

        std::cout << "\t" << __LINE__ << childItr->tag << std::endl;

        // if expression statement, while, if, for, switch (challenge)
        if (childItr->tag == "expr_stmt" || childItr->tag == "for" || childItr->tag == "if" || childItr->tag == "while" || childItr->tag == "switch") {
            // add count line.
            if (childItr->tag == "for" || childItr->tag == "if" || childItr->tag == "while" || childItr->tag == "switch") {
                // set functionLine to immediately after the first "{" 
                std::list<AST*>::iterator functionLine = childItr->getChild("block")->child.begin();
                while ((*functionLine)->text != "{") {
                    ++functionLine;
                }
                ++functionLine;
                // location set...
                childItr->getChild("block")->child.insert(functionLine, new AST(token, ("    " + profileName + ".count(__LINE__);")));
            }
            else {
                childItr->child.push_back(new AST(token, ("    " + profileName + ".count(__LINE__);")));
            }
            
        }
    }
}

/////////////////////////////////////////////////////////////////////
// Returns TRUE if the tag (syntactic category) is not to be profiled
//
// IMPORTANT for milestone 3
//
bool isStopTag(std::string tag) {
    if (tag == "condition"             ) return true; //Remove for challenge
    if (tag == "type"                  ) return true;
    if (tag == "name"                  ) return true;
    if (tag == "return"                ) return true;
    if (tag == "break"                 ) return true;
    if (tag == "continue"              ) return true;
    if (tag == "parameter_list"        ) return true;
    if (tag == "decl_stmt"             ) return true;
    if (tag == "argument_list"         ) return true;
    if (tag == "init"                  ) return true;
    if (tag == "cpp:include"           ) return true;
    if (tag == "macro"                 ) return true;
    if (tag == "comment type=\"block\"") return true;
    if (tag == "comment type=\"line\"" ) return true;
    return false;
}


/////////////////////////////////////////////////////////////////////
// Print an AST
// Preorder traversal that prints out leaf nodes only (tokens & whitesapce)
//
std::ostream& AST::print(std::ostream& out) const {
    for (std::list<AST*>::const_iterator i = child.begin(); i != child.end(); ++i) {
        if ((*i)->nodeType != category)
            out << (*i)->text;   //Token or whitespace node, print it
        else
            (*i)->print(out);    //Category node, recursive call
    }
    return out;
}


/////////////////////////////////////////////////////////////////////
// Read in and construct AST
// REQUIRES: '>' was previous charater read 
//           && this == new AST(category, "TagName")
//
std::istream& AST::read(std::istream& in) {
    AST *subtree;
    std::string temp, Lws, Rws;
    char ch;
    if (!in.eof()) in.get(ch);
    while (!in.eof()) {
        if (ch == '<') {                      //Found a tag
            temp = readUntil(in, '>');
            if (temp[0] == '/') {
                closeTag = temp;
                break;                        //Found close tag, stop recursion
            }
            subtree = new AST(category, temp);               //New subtree
            subtree->read(in);                               //Read it in
            in.get(ch);
            child.push_back(subtree);                        //Add it to child
        } else {                                             //Found a token
            temp = std::string(1, ch) + readUntil(in, '<');  //Read it in.
            std::vector<std::string> tokenList = tokenize(temp);
            for (std::vector<std::string>::const_iterator i=tokenList.begin();
                 i != tokenList.end();
                 ++i) {
                if (isspace((*i)[0])) {
                    subtree = new AST(whitespace, *i);
                } else {
                    subtree = new AST(token, *i);
                }
                child.push_back(subtree);
            }
            ch = '<';
        }
    }
    return in;
}


/////////////////////////////////////////////////////////////////////
// Utilities for AST::read()

// Reads until a key is encountered.  Does not include ch.
// REQUIRES: in.open()
// ENSURES: RetVal[i] != key for all i.
std::string readUntil(std::istream& in, char key) {
    std::string result;
    char ch;
    in.get(ch);
    while (!in.eof() && (ch != key)) {
        result += ch;
        in.get(ch);
    }
    return result;
}

// Converts escaped XML charaters back to charater form
// REQUIRES: s == "&lt;"
// ENSURES:  RetVal == "<"
std::string unEscape(std::string s) {
    std::size_t pos = 0;
    while ((pos = s.find("&gt;"))  != s.npos) { s.replace(pos, 4, ">");}
    while ((pos = s.find("&lt;"))  != s.npos) { s.replace(pos, 4, "<");}
    while ((pos = s.find("&amp;")) != s.npos) { s.replace(pos, 5, "&");}
    return s;
}

// Given: s == "   a + c  "
// RetVal == {"   ", "a", " ", "+", "c", " "}
std::vector<std::string> tokenize(const std::string& s) {
    std::vector<std::string> result;
    std::string temp = "";
    unsigned i = 0;
    while (i < s.length()) {
        while (isspace(s[i]) && (i < s.length())) {
            temp.push_back(s[i]);
            ++i;
        }
        if (temp != "") {
            result.push_back(temp);
            temp = "";
        }
        while (!isspace(s[i]) && (i < s.length())) {
            temp.push_back(s[i]);
            ++i;
        }
        if (temp != "") {
            result.push_back(temp);
            temp = "";
        }
    }
    return result;
}
    


