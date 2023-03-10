// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(3);

        // Verify
        assert(bi == 9);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("314159265358979323846264338327950288419716939937510");

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "2827433388230813914616379044951552595777452459437590");  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("314159265358979323846264338327950288419716939937510");

        // Test 
        bi = bi.timesDigit(8);

        // Verify
        assert(bi == "2513274122871834590770114706623602307357735519500080");  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("314159265358979323846264338327950288419716939937510");

        // Test 
        bi = bi.timesDigit(7);

        // Verify
        assert(bi == "2199114857512855266923850368295652018938018579562570");  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("314159265358979323846264338327950288419716939937510");

        // Test 
        bi = bi.timesDigit(6);

        // Verify
        assert(bi == "1884955592153875943077586029967701730518301639625060");  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("314159265358979323846264338327950288419716939937510");

        // Test 
        bi = bi.timesDigit(5);

        // Verify
        assert(bi == "1570796326794896619231321691639751442098584699687550");  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("314159265358979323846264338327950288419716939937510");

        // Test 
        bi = bi.timesDigit(4);

        // Verify
        assert(bi == "1256637061435917295385057353311801153678867759750040");  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("314159265358979323846264338327950288419716939937510");

        // Test 
        bi = bi.timesDigit(3);

        // Verify
        assert(bi == "942477796076937971538793014983850865259150819812530");  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("314159265358979323846264338327950288419716939937510");

        // Test 
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == "628318530717958647692528676655900576839433879875020");  
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi("314159265358979323846264338327950288419716939937510");

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == "314159265358979323846264338327950288419716939937510");  
    }



    //Add test cases as needed.
    
    std::cout << "Done testing bigint * digit" << std::endl;
    return 0;
}

