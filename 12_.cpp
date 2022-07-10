#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    // int m = 0;
    // for (int i = 0; i < height.size(); i++)
    // {
    //     for (int j = i; j < height.size(); j++)
    //     {
    //         int h = min(height[i],height[j]);
    //         int l = j - i;
    //         int area = h*l;
    //         area>m?m=area:m=m;
    //     }
    // }
    // return m;
    int water = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) {
        int h = min(height[i], height[j]);
        water = max(water, (j - i) * h);
        while (height[i] <= h && i < j) i++;
        while (height[j] <= h && i < j) j--;
    }
    return water;
}
int main()
{
    vector<int> height;
    height.push_back(1);
    height.push_back(8);
    height.push_back(6);
    height.push_back(2);
    height.push_back(5);
    height.push_back(4);
    height.push_back(8);
    height.push_back(3);
    height.push_back(7);

    cout << maxArea(height);
}