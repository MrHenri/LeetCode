#include <iostream>
#include <unordered_map>

bool isAnagram(std::string s, std::string t) {
    int alphabetic[26] = {0};
    for(char ch : s) alphabetic[ch - 'a']++;
    for(char ch : t){
        if(alphabetic[ch - 'a'] < 0) return false;
        alphabetic[ch - 'a']--;
    }
    for(int i : alphabetic){
        if(i) return false;
    }
    return true;
}

// bool isAnagram(std::string s, std::string t) {
//     std::unordered_map<char,int> umap;
//     for(char ch : s){
//         umap[ch]++;
//     }

//     for(char ch : t){
//         if(!umap.count(ch)){
//             return false;
//         }
//         umap[ch]--;
//     }

//     for(auto it = umap.begin(); it != umap.end(); it++) {
//         if(it->second) return false;
//     }
//     return true;
// }

int main(){
    std::cout << isAnagram("anagram", "nagaram") << std::endl;
    std::cout << isAnagram("rat", "car") << std::endl;
}
