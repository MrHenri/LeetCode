#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> result = {};
    for (int num : nums){
        if (result.count(num) != 0){
            return true;
        }
        result.insert(num);
    }
    return false;
}

int main(){
    std::vector<int> v = {1,2,3,1};
    std::cout << containsDuplicate(v) << std::endl;
}
