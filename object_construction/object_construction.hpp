#ifndef OBJ_CONST_HPP
#define OBJ_CONST_HPP

class myClass {
public:
    myClass(); // default constructor

    myClass(const myClass&); // copy constructor

    ~myClass(); // destructor

    //= assignment overload
    myClass operator=(const myClass&);
};

#endif