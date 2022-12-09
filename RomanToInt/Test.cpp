#include "Test.h"
#include "RomanToInt.h"
#include <cassert>
#include <iostream>

void test(){
    int test1 = romanToInt("III");
    int test2 = romanToInt("LVIII");
    int test3 = romanToInt("MCMXCIV");

    assert(test1 == 3);
    assert(test2 == 58);
    assert(test3 == 1994);

    std::cout << "all Tests passed.\n";
}