#include <iostream>
#include <vector>

int searchInsert(std::vector<int>& nums, int target) {
    int i = 0;
    while(i < nums.size() && nums[i] < target) {
        i++;
    }
    return i;
}

int main(){
    std::vector<int> v = {1,3,5,6};
    std::cout << searchInsert(v,5) << std::endl;
    std::cout << searchInsert(v,2) << std::endl;
    std::cout << searchInsert(v,7) << std::endl;
}