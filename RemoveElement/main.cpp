#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val) {
    int i = 0;
    for (int num : nums){
        if(num != val){
            nums[i++] = num;
        }
    }
    return i;
}

int main() {
    // std::vector<int> v = {3,2,2,3}; //val = 3
    std::vector<int> v = {0,1,2,2,3,0,4,2};
    std::cout << removeElement(v, 2) << std::endl;
}
