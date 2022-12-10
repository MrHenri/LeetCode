#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val) {
    int i = 0, j = 0;
    while(j != nums.size())
        if(nums[j] == val) j++;
        else nums[i++] = nums[j++];
    return i;
}

int main(){
    std::vector<int> v = {0,1,2,2,3,0,4,2};
    std::cout << removeElement(v, 2) << std::endl;
}