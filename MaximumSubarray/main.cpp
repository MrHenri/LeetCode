#include <vector>
#include <iostream>

int maxSubArray(std::vector<int>& nums) {
    int sum = nums[0], curr = 0;
    for (int num : nums){
        curr += num;
        if (curr > sum) sum = curr;
        if (curr < 0) curr = 0;
    }
    return sum;
}

// int maxSubArray(std::vector<int>& nums) {
//     int i = 0, sum = -100000, curr = 0, first = 0;

//     while(i < nums.size()) {
//         while(i < nums.size() && nums[i] >= 0){
//             curr += nums[i];
//             i++;
//             first = 1;
//         }

//         if (curr > sum && first){
//             sum = curr;
//         }
//         first = 0;

//         if(i >= nums.size()){
//             return sum;
//         }

//         curr += nums[i];

//         if (curr > sum){
//             sum = curr;
//         }

//         i++;

//         if (curr >= 0){
//             continue;
//         }

//         curr = 0;
//     }

//     return sum;
// }

int main() {
    // std::vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
    // std::vector<int> v = {1};
    // std::vector<int> v = {-1};
    // std::vector<int> v = {5,4,-1,7,8};
    std::vector<int> v = {-2,-1};
    std::cout << maxSubArray(v) << std::endl;
}