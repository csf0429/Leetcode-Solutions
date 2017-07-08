//
// Created by 蔡少凡 on 7/8/17.
//

#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int p1 = nums[n-1] * nums[n-2] * nums[n-3];
        int p2 = nums[n-1] * nums[0] * nums[1];
        return p1 > p2 ? p1:p2;
    }
};