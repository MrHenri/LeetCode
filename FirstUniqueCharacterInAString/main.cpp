#include <iostream>
#include <unordered_map>
#include <vector>
#include <unordered_set>

// int firstUniqChar(std::string s) {
//     std::unordered_map<char, int> quntityByChar;
//     for(int i = s.size()-1; i >= 0; i--){
//         quntityByChar[s[i]]++;
//     }

//     for(int i = 0; i < s.size(); i++){
//         if(quntityByChar[s[i]] == 1) return i;
//     }

//     return -1;
// }

int firstUniqChar(std::string s) {
    std::unordered_map<char, int> posByChar;
    for(int i=s.size()-1; i >= 0 ; i--) {
        if(!posByChar.count(s[i])){
            posByChar[s[i]] = i;
        }else{
            posByChar[s[i]] = -1;
        }
    }
    for(auto it = posByChar.begin(); it != posByChar.end(); it++){
        if(it->second != -1) return it->second;
    }
    return -1;
}

int main(){
    std::cout << firstUniqChar("leetcode") << std::endl;
    std::cout << firstUniqChar("loveleetcode") << std::endl;
    std::cout << firstUniqChar("aabb") << std::endl;
}