#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
   int l =1;
   for(int i =1;i<nums.size();i++){
    if(nums[i]!=nums[i-1]){
        nums[i] = nums[l];
        l+=1;
    }
   }
    return l;
}

int main()
{
    vector<int> n;
    n.push_back(2);
    n.push_back(0);
    n.push_back(2);
    n.push_back(1);
    n.push_back(1);
    n.push_back(0);
    cout<<removeDuplicates(n);
    return 0;
}