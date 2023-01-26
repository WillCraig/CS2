#include <iostream>
#include "object_construction.hpp"

void func_call_by_value(myClass myObject) {
    std::cout << "Hello! This is call by value\n";
}

void func_call_by_ref(myClass * myObject) {
    std::cout << "Hello! This is call by ref\n";
}

int main() {
    myClass ex1; // "Default Constructor was called."
    
    myClass ex2(ex1); // "copy constructor was called"

    myClass ex3; // "Default construtor was called"

    ex3 = ex1; // "overload = was called"

    myClass * temp;
    *temp = ex3;
    std::cout << "Before call by value\n";
    func_call_by_value(ex3);
        std::cout << "Before call by ref\n";
    func_call_by_ref(temp);

    return 0;
}