//
// Created by 蔡少凡 on 6/16/17.
//

#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        int d = 0;
        for(int i = 0; i< nums.size(); i++){
            if(hash.find(nums[i])!=hash.end() && i - hash[nums[i]] <= k )
                return true;
            else
                hash[nums[i]] = i;
        }
        return false;

    }
};