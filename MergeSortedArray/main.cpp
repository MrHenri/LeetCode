#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    if (m == 0){
        nums1 = nums2;
        return;
    }

    if (n == 0){
        return;
    }

    int i = nums1.size()-1;
    m--;
    n--;

    while(m >= 0 && n >= 0){
        if(nums2[n] >= nums1[m]){
            nums1[i--] = nums2[n--];
        }else {
            nums1[i--] = nums1[m--];
        }
    }

    while (n >= 0){
        nums1[i--] = nums2[n--];
    }
}

int main(){
    std::vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6};
    int numsLenght1 = 3, numsLenght2 = 3;

    // std::vector<int> nums1 = {0}, nums2 = {1};
    // int numsLenght1 = 0, numsLenght2 = 1;

    merge(nums1, numsLenght1, nums2, numsLenght2);
}