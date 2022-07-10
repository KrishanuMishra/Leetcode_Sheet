#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
        int res = 0;
		
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                res = nums[i];
                break;
            }
        }
        return res;
    }

int main()
{
    vector<int> nums;
    // [1,3,4,2,2]
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    cout<<findDuplicate(nums);
    return 0;
}