#include <iostream>
#include <vector>
#include <cmath>

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target){
    for(std::vector<int> line : matrix){
        if(target > line.back()){
            continue;
        }
        for(int num : line){
            if(num == target) return true;
        }
        return false;
    }
    return false;
}

int main(){
    // std::vector<std::vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    // int target = 3;
    // int target = 13;

    // std::vector<std::vector<int>> matrix = {{1}};
    // int target = 1;

    // std::vector<std::vector<int>> matrix = {{1,3,5}};
    // int target = 5;

    std::vector<std::vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,50}};
    int target = 7;


    std::cout << searchMatrix(matrix, target) << std::endl;
}