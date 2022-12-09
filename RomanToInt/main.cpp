#include "RomanToInt.h"
#include "Test.h"
#include <iostream>
#include <cstring>

void run(){
    std::cout << romanToInt("III") << "\n";
    std::cout << romanToInt("LVIII") << "\n";
    std::cout << romanToInt("MCMXCIV");
}

int main (int argc, char *argv[]){
    if (argc > 1 && strcmp(argv[1], "-t") == 0){
        test();
    }else{
        run();
    }
    return 0;
}

