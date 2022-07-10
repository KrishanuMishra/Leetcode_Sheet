#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> r;
    for(int i = 0;i<nums.size();i++){
        for(int j =i;j<nums.size();i++){
            if(nums[i]+nums[j] == target){
                r.push_back(i);
                r.push_back(j);
                break;
            }
        }
    }
    return r;
}

int main()
{
    vector<int> v = {2,7,11,15};
    int target = 9;
    vector<int> s = twoSum(v,target);
    for(auto i:s){
        cout<<s[i]<<" ";
    }
}