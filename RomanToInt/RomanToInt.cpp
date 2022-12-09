#include "RomanToInt.h"
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char,int> r = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };

    int sum = r[s[0]];

    for(int  i = 1; i<s.size(); i++){
        int current = r[s[i]];
        int pre = r[s[i-1]];
        if(pre < current){
            sum += current - (pre*2);
        }else{
            sum+=current;
        }
    }
    return sum;
}