#include <iostream>
#include <unordered_map>
#include <vector>
#include <bits/stdc++.h>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int,int> umap;

    for(int i = 0; i < nums.size(); i++) {
        umap[i] = nums[i];
    }

    std::sort(nums.begin(), nums.end());

    int i = 0, j = nums.size() - 1;
    while(i < nums.size() - 1  && j > 0){
        if(nums[i] + nums[j] > target){
            j--;
        } else if(nums[i] + nums[j] < target){
            i++;
        } else {
            break;
        }
    }

    int x = 0, y = 0;
    for(auto it = umap.begin(); it != umap.end(); it++){
        if(it->second == nums[i] && x == 0){
            x = it->first;
            continue;
        }

        if(it->second == nums[j] && y == 0){
            y = it->first;
        }
    }

    return std::vector<int>{x, y};
}

int main(){
    // std::vector<int> v = {2,7,11,15};
    // int target = 9;

    // std::vector<int> v = {3,2,4};
    // int target = 6;

    std::vector<int> v = {3,3};
    int target = 6;


    std::vector<int> result = twoSum(v, target);
    for(int num : result){
        std::cout << num << " ";
    }
    std::cout << std::endl;
}