#include <iostream>
#include <vector>

int maxProfit(std::vector<int>& prices) {
    if(!(prices.size()-1)){
        return 0;
    }

    int result = 0, buy = 0;
    for(int i = 1; i < prices.size(); i++){
        int sell = prices[i] - prices[buy];
        if(sell < 0){
            buy = i;
            continue;
        }

        if(sell > result){
            result = sell;
        }
    }

    return result;
}


// int maxProfit(std::vector<int>& prices) {
//     if(!(prices.size() - 1)){
//         return 0;
//     }

//     int i = 0, result = 0;

//     while (i < prices.size()){
//         int j = i, max = i+1;
//         if(max >= prices.size()){
//             return result;
//         }

//         while(j < prices.size()){
//             if(prices[j] >= prices[max]){
//                 max = j;
//             }
//             j++;
//         }

//         while(i < max){
//             int curr = prices[max] - prices[i];
//             if(curr > result){
//                 result = curr;
//             }
//             i++;
//         }
//         i++;
//     }
//     return result;
// }

int main(){
    std::vector<int> prices = {7,1,5,3,6,4};
    // std::vector<int> prices = {7,6,4,3,1};
    // std::vector<int> prices = {1,2};
    // std::vector<int> prices = {1};
    std::cout << maxProfit(prices) << std::endl;
}