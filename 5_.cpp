#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    for (int i = 0, j = 0; j < nums.size(); j++) {
        if (nums[j] != 0) {
            swap(nums[i++], nums[j]);
        }
    }
}

int main(){
    vector<int> v = {0,1,0,3,12};
    moveZeroes(v);
    return 0;
}