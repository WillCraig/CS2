/**
 * William Craig
 * lab4 - fileio
 * CS 23001 - Dr. Maletic
 */

#include <iostream>
#include <fstream>

// A function that reads all text up to a space character (' ') while outputting everything up to that space
void upToSpace();

// A function that reads two numbers (int not bigint) ending in a ';' and adds them together and outputs the result. Note: You only have to read the first two numbers.
void addTwoInput();


int main() {
    std::cout << "\n--- Full Example of eof() ---\n";
    
    std::ifstream file("fileio-data-1.txt");

    if (!file.is_open()) {
        std::cout << "Unable to open file" << std::endl;
        // return from function???
    }
    else {
        char ch;
        file.get(ch);

        while(!file.eof()) {
            std::cout << ch;
            file.get(ch);
        }

        std::cout << '\n';
    }
    
    file.close();

    

    std::cout << "\n--- testing upToSpace() ---\n";
    upToSpace();

    std::cout << "\n--- testing addTwoInput() ---\n";
    addTwoInput();

    return 0;
}

// working
void upToSpace() {
    
    std::ifstream inFile("fileio-data-1.txt");

    if (!inFile.is_open()) {
        std::cout << "Unable to open inFile" << std::endl;
        // return from function???
    }
    else {
        // if the file was able to be opened.


        char i[100]; // buffer for reading in numbers until space

        while(inFile >> i) { // while still able to read in input until space.
            std::cout << i << std::endl; // display input from beginning of number to semicolon.
        }
    }
    // close input file.
    inFile.close();
}

void addTwoInput() {
    //
    std::ifstream inFile("fileio-data-1.txt");
    if (!inFile.is_open()) {
        std::cout << "Unable to open inFile" << std::endl;
    }
    else {
        // if file was able to be opened.

        int first, second;

        while (inFile >> first) { // if another integer can be read, read into first integer.
            inFile.ignore(); // skip over the space since int is delimited by ;
            inFile >> second; // read in second integer
            inFile.ignore(); // skip over the space since int is delimited by ;
            std::cout << first << " + " << second << " = " << (first + second) << std::endl;
        }
    }
    // close input file
    inFile.close();
}