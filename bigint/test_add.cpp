/**
 * William Craig
 * bigint
 * CS 23001 
 */


// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }

        {
        // Setup
        bigint left("9");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9"); 
        assert(right == 79);
        assert(result == "88");
    }
    {
        // Setup
        bigint left("99");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99"); 
        assert(right == 79);
        assert(result == "178");
    }
    {
        // Setup
        bigint left("999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999"); 
        assert(right == 79);
        assert(result == "1078");
    }
    {
        // Setup
        bigint left("9999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999"); 
        assert(right == 79);
        assert(result == "10078");
    }
    {
        // Setup
        bigint left("99999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999"); 
        assert(right == 79);
        assert(result == "100078");
    }
    {
        // Setup
        bigint left("999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999"); 
        assert(right == 79);
        assert(result == "1000078");
    }
    {
        // Setup
        bigint left("9999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999"); 
        assert(right == 79);
        assert(result == "10000078");
    }
    {
        // Setup
        bigint left("99999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999"); 
        assert(right == 79);
        assert(result == "100000078");
    }
    {
        // Setup
        bigint left("999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999"); 
        assert(right == 79);
        assert(result == "1000000078");
    }
    {
        // Setup
        bigint left("9999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999"); 
        assert(right == 79);
        assert(result == "10000000078");
    }
    {
        // Setup
        bigint left("99999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999"); 
        assert(right == 79);
        assert(result == "100000000078");
    }
    {
        // Setup
        bigint left("999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999"); 
        assert(right == 79);
        assert(result == "1000000000078");
    }
    {
        // Setup
        bigint left("9999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999"); 
        assert(right == 79);
        assert(result == "10000000000078");
    }
    {
        // Setup
        bigint left("99999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999"); 
        assert(right == 79);
        assert(result == "100000000000078");
    }
    {
        // Setup
        bigint left("999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }
    {
        // Setup
        bigint left("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
        bigint right(79);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left    == "9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999"); 
        assert(right == 79);
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000078");
    }

    
    std::cout << "Done with testing addition." << std::endl;
    return 0;
}

