#include <iostream>
#include <cassert>

#include "string.hpp"

int main() {
    std::cout << __FILE__ << ": All tests... ";
    {
        // ======= TEST =======
        //
        String a("Kent State University");
        String b("Akron State University");

        // check before swapping
        assert(a == "Kent State University");
        assert(b == "Akron State University");

        a.swap(b);

        assert(a == "Akron State University");
        assert(b == "Kent State University");
    }
    {
        String a("This is my programming project");
        String b;

        b = a;
        
        assert(a == b);
        assert(a == "This is my programming project");
        assert(b == "This is my programming project");
    }
    {
        String c("This is another sentence");
        String d(c);

        assert(c == d);
        assert(c == "This is another sentence");
        assert(d == "This is another sentence");


    }

    std::cout << " PASSED!\n\n";
    return 0;
}