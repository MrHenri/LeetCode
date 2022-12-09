using namespace std;
#include <vector>
#include <iostream>
#include <string>

string longestCommonPrefix(vector<string>& strs) {
    string str = strs.front(), prefix = "";
    int i = 0;
    bool stop = false;
    while (i < str.size()) {
        char current = str[i];
        for (int j = 0; j < strs.size(); j ++) {
            if(i >= strs[j].size() || str[i] != strs[j][i]){
                stop = true;
                break;
            }
        }

        if (stop){
            break;
        }
        prefix += current;
        i++;
    }
    return prefix;
}

int main () {
    vector<string> strs = { "flower", "flow", "flew"};
    cout << longestCommonPrefix(strs);
    return 0;
}

