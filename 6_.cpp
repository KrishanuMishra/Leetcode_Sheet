#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    // This gives TLE
    // int max = 0;
    // for(int i = 0;i<prices.size();i++){
    //     for(int j = i;j<prices.size();j++){
    //         if(prices[j]-prices[i]>max){
    //             max = prices[j]-prices[i];
    //         }
    //     }
    // }
    // return max;
    int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            pist = prices[i] - lsf;
            if(op < pist){
                op = pist;
            }
        }
        return op;
}

int main()
{
    vector<int> prices = {7,6,4,3,1};
    cout << maxProfit(prices);
    return 0;
}