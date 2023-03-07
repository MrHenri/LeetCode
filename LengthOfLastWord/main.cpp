#include <string>
#include <iostream>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int curr = 0, result = 0, i = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' ') curr++;
            else {
                result = curr != 0 ? curr : result;
                curr = 0;
            }
        }
        return result = curr != 0 ? curr : result;
    }
};

int main(){
    Solution s;
    std::cout << s.lengthOfLastWord("   fly me   to   the moon  ") << std::endl;
    std::cout << s.lengthOfLastWord("luffy is still joyboy") << std::endl;
}