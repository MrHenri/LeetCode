#include <vector>
#include <iostream>

int removeDuplicates(std::vector<int>& nums) {
    int i = !nums.empty();
    for (int n : nums)
        if (n > nums[i-1])
            nums[i++] = n;
    return i;
}

// int removeDuplicates(std::vector<int>& nums) {
//     std::vector<int>::iterator it = nums.begin();
//     int pre = *it, k = nums.size();
//     it++;

//     while(it != nums.end()){
//         if(*it == pre){
//             nums.erase(it);
//             nums.push_back(0);
//             k--;
//             continue;
//         }
//         pre = *it;
//         it++;

//         if(pre != 0 && *it == 0){
//             break;
//         }
//     }

//     return k;
// }

// int removeDuplicates(std::vector<int>& nums) {
//     int k = nums.size(), pre = nums.front(), i = 1;

//     while (i < nums.size()) {
//         if (nums[i] == pre) {
//             nums.erase(nums.begin() + i);
//             nums.push_back(0);
//             k--;
//             i--;
//         } else {
//             pre = nums[i];
//         }

//         i++;

//         if (pre != 0 && nums[i] == 0){
//             break;
//         }
//     }
//     return k;
// }

int main(){
    std::vector<int> v = {0,0,1,1,1,2,2,3,3,4};
    // std::vector<int> v = {1,1,2};
    // std::vector<int> v = {1,2};
    std::cout << removeDuplicates(v) << std::endl;
}

