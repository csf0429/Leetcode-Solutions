//
// Created by 蔡少凡 on 6/8/17.
//

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int s) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        return sum < s|| (s+sum) &1 ? 0:subsetSum(nums, (s+sum)/2);
    }

    int subsetSum(vector<int> &nums, int s){
        int dp[10005] = {0};
        dp[0] = 1;

        for(int n:nums)
            for(int i = s;i>=n; i--){
                dp[i] += dp[i-n];
             }
        return dp[s];
    }

};

int main(){
    Solution s = Solution();
    vector<int> nums = {1,1,1,1,1};
    cout << s.findTargetSumWays(nums, 3)<< endl;
    return 0;
}