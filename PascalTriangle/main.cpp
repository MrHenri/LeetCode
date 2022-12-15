#include <vector>
#include <iostream>

std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> result(numRows);
    for(int i = 0; i < numRows; i++){
        std::vector<int> curr = std::vector<int>(i+1);
        curr[0] = 1;
        curr[i] = 1;
        for(int j = 1; j < i; j++){
            curr[j] = result[i-1][j-1] + result[i-1][j];
        }
        result[i] = curr;
    }
    return result;
}

int main(){
    std::vector<std::vector<int>> result = generate(5);
    int r = size(result);

    for(int i = 0; i < r; i++){
        int c = size(result[i]);
        for(int j = 0; j < c; j++){
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
}