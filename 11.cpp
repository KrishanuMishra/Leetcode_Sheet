#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(),nums.end());
    for(int i = 0;i<(nums.size()-2);i++){
        if(i==0 || i>0 && nums[i]!=nums[i+1]){
            int lo = 0,hi = nums.size()-1,sum = 0 - nums[i];
            while (lo<hi)
            {
                if(nums[lo]+nums[hi]==sum){
                    vector<int> temp;
                    temp.push_back(nums[lo]);
                    temp.push_back(nums[hi]);
                    temp.push_back(sum);
                    res.push_back(temp);
                    while (lo < hi && nums[lo] == nums[lo+1]) lo++;
                        while (lo < hi && nums[hi] == nums[hi-1]) hi--;
                        
                        lo++; hi--;
                    } 
                    else if (nums[lo] + nums[hi] < sum) lo++;
                    else hi--;
               }
            }
        }
        return res;
}

int main()
{   
    vector<int> nums;
    // [-1,0,1,2,-1,-4]
    nums.push_back(-1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(-1);
    nums.push_back(-4);

    vector<vector<int>> sol = threeSum(nums); 
    return 0;
}