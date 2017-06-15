//
// Created by 蔡少凡 on 6/13/17.
//

#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.empty() || target < nums[0])
            return 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target || (i&&nums[i] >target && nums[i-1] < target))
                return i;
        }
        return nums.size();

    }
};