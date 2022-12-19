#include <iostream>
#include <unordered_map>
#include <unordered_set>

bool canConstruct(std::string ransomNote, std::string magazine) {
    int alphabetic[26] = {0};
    for(char ch : magazine) alphabetic[ch - 'a']++;

    for(char ch : ransomNote){
        if(alphabetic[ch - 'a']-- <= 0) return false;
    }

    return true;
}


// bool canConstruct(std::string ransomNote, std::string magazine) {
//     std::unordered_map<char,int> quantityByChar;
//     for(char ch : ransomNote){
//         quantityByChar[ch]++;
//     }

//     for(char ch : magazine){
//         if(quantityByChar.count(ch)) quantityByChar[ch]--;
//     }

//     for(auto it = quantityByChar.begin(); it != quantityByChar.end(); it++){
//         if(it->second > 0) return false;
//     }
//     return true;
// }

int main(){
    std::cout << canConstruct("a", "b") << std::endl;
    std::cout << canConstruct("aa", "ab") << std::endl;
    std::cout << canConstruct("aa", "aab") << std::endl;
}
