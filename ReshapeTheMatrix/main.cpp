#include <vector>
#include <iostream>

std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>>& mat, int r, int c) {
    int rMat = mat.size(), cMat = mat[0].size(), total = r*c;
    if((rMat == r && cMat == c) || (rMat*cMat != total)){
        return mat;
    }

    std::vector<std::vector<int>> output(r, std::vector<int>(c));
    for(int i = 0; i < total; i++){
        output[i/c][i%c] = mat[i/cMat][i%cMat];
    }

    return output;
}

// std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>>& mat, int r, int c) {
//     std::vector<std::vector<int>> output;
//     int rMat = mat.size(), cMat = mat[0].size();

//     if((rMat == r && cMat == c) || (rMat*cMat != r*c)){
//         return mat;
//     }

//     std::vector<int> straightLine;
//     for(std::vector<int> row : mat){
//         for(int num : row){
//             straightLine.push_back(num);
//         }
//     }
//     int k = 0;
//     for(int i = 0; i < r; i++){
//         output.push_back({});
//         for(int j = 0; j < c; j++){
//             output[i].push_back(straightLine[k++]);
//         }
//     }
//     return output;
// }

int main(){
    // std::vector<std::vector<int>> input = {{1,2}, {3,4}};
    // int r = 2, c = 4;
    std::vector<std::vector<int>> input = {{1,2}, {3,4}};
    int r = 1, c = 4;

    std::vector<std::vector<int>> result = matrixReshape(input, r, c);
    int rResult = result.size(), cResult = result[0].size();
    for(int i = 0; i < rResult; i++){
        for(int j = 0; j < cResult; j++){
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
}