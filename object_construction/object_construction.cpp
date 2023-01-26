#include <iostream>
#include "object_construction.hpp"

myClass::myClass() {
    std::cout << "default constructor was called.\n";
}

myClass::myClass(const myClass &obj) {
    std::cout << "Copy constructor was called.\n";
}

myClass::~myClass() {
    std::cout << "Destructor was called.\n";
}

myClass myClass::operator=(const myClass &obj) {
    std::cout << "Assignment Overload Operator was called.\n";
    return obj;
}
