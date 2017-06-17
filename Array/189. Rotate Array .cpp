//
// Created by 蔡少凡 on 6/17/17.
//

#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (k == 0)
            return;
        k = k%nums.size();
        vector<int> temp;
        for(int i=0; i<k;i++){
            temp.push_back(nums[nums.size()-k+i]);
        }
        for(int i=nums.size()-k-1; i>=0;i--){
            nums[k+i] = nums[i];
        }
        for(int i=0; i<k; i++){
            nums[i] = temp[i];
        }
    }
};