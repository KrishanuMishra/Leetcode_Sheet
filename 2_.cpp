#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }

int main()
{
    // 2,0,2,1,1,0
    vector<int> n;
    n.push_back(2);
    n.push_back(0);
    n.push_back(2);
    n.push_back(1);
    n.push_back(1);
    n.push_back(0);
    sortColors(n);
    for(int i =0;i<n.size();i++){
        cout<<n[i]<<" ";
    }
    return 0;
}