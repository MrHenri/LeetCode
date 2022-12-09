#include <iostream>
#include <stack>

bool isValid(std::string s) {
    std::stack<char> result;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            result.push(s[i]);
            continue;
        }
        if(result.empty()){return false;}
        if(s[i] == ')' && result.top() != '('){return false;}
        if(s[i] == ']' && result.top() != '['){return false;}
        if(s[i] == '}' && result.top() != '{'){return false;}
        result.pop();
    }

    return result.empty();
}

int main(){
    std::cout << isValid("(()[]");
    return 0;
}

