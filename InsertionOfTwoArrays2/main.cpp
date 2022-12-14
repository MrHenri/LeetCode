#include <vector>
#include <unordered_map>
#include <iostream>

std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::unordered_map<int, int> umap;
    for(int num : nums1) {
        umap[num]++;
    }
    std::vector<int> result;
    for(int num : nums2) {
        if(umap.count(num) && umap[num] > 0){
            result.push_back(num);
            umap[num]--;
        }
    }
    return result;
}

// std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
//     std::map<int, int> quantityByValue;
//     for(int num : nums1){
//         int quantity = quantityByValue.count(num) ? quantityByValue[num] : 0;
//         quantityByValue[num] = quantity+=1;
//     }

//     std::sort(nums2.begin(), nums2.end());

//     std::vector<int> result;
//     for(int num : nums2){
//         int quantity = quantityByValue.count(num) ? quantityByValue[num] : 0;
//         if(!quantity){
//             continue;
//         }
//         if (quantity){
//             result.push_back(num);
//         }
//         quantity--;
//         quantityByValue[num] = quantity;
//     }
//     return result;
// }

int main(){
    // std::vector<int> nums1 = {1,2,2,1}, nums2 = {2,2};
    std::vector<int> nums1 = {4,9,5}, nums2 = {9,4,9,8,4};
    // std::vector<int> nums1 = {21,47,80,4,3,24,87,12,22,11,48,6,89,80,74,71,74,55,58,56,4,98,40,66,49,53,62,27,3,66,78,24,48,69,88,12,80,63,98,65,46,35,72,5,64,72,7,29,37,3,2,75,44,93,79,78,13,39,85,26,15,41,87,47,29,93,41,74,6,48,17,89,27,61,2,68,99,57,45,73,25,33,38,32,58},
    // nums2 = {1,39,6,81,85,10,38,22,0,89,57,93,58,69,65,80,84,24,27,54,37,36,26,88,2,7,24,36,51,5,74,57,45,56,55,67,25,33,78,49,16,79,74,80,36,27,89,49,64,73,96,60,92,31,98,72,22,31,0,93,70,87,80,66,75,69,81,52,94,90,51,90,74,36,58,38,50,9,64,55,4,21,49,60,65,47,67,8,38,83};
    std::vector<int> result = intersect(nums1, nums2);
    for(int num : result){
        std::cout << num << ",";
    }
    std::cout << std::endl;
}