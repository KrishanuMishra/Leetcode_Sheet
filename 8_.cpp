#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    // int max_profit = 0;
    //     for(int i = 0;i<prices.size();i++){
    //         for(int j = i;j<prices.size();j++){
    //             if(prices[j] - prices[i]>max_profit){
    //                 max_profit = prices[j] - prices[i];
    //                 // cout<<max_profit<<" ";
    //             }
    //         }
    //     }
    //     return max_profit;
    int ret = 0;
    for (size_t p = 1; p < prices.size(); ++p) 
      ret += max(prices[p] - prices[p - 1], 0);    
    return ret;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    // vector<int> prices = {};
    // vector<int> prices = {1,2,3,4,5};
    // vector<int> prices = {7,6,4,3,1};
    cout<<maxProfit(prices);
    
}