#include <iostream>
#include <vector>
#include <map>
#include <set>

bool isValidSudoku(std::vector<std::vector<char>>& board) {
    std::set<char> quad;
    std::map<int, std::set<char>> line;
    std::map<int, std::set<char>> column;

    for(int i=0; i<9; i+=3){
        for(int j=0; j<9; j+=3){
            for(int l=0; l<3; l++){
                for(int c=0; c<3; c++){
                    if(line[i+l].count(board[i+l][j+c]) || column[j+c].count(board[i+l][j+c]) || quad.count(board[i+l][j+c])){
                        return false;
                    }
                    if(board[i+l][j+c] != '.' && board[i+l][j+c] != ','){
                        line[i+l].insert(board[i+l][j+c]);
                        column[j+c].insert(board[i+l][j+c]);
                        quad.insert(board[i+l][j+c]);
                    }
                }
            }
            quad.clear();
        }
    }
    return true;
}

int main(){
    std::vector<std::vector<char>> board =
    {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    std::cout << isValidSudoku(board) << std::endl;
}