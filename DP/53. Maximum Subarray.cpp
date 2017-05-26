//
// Created by 蔡少凡 on 5/26/17.
//

#include <iostream>
#include <vector>
#include "math.h"
using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int ans = nums[0];
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            ans = max(sum, ans);
            sum = max(sum, 0);

        }
        return ans;
    }
};

//class Solution {
//public:
//    int maxSubArray(vector<int>& A) {
//        int ans=A[0],i,j,sum=0;
//        for(i=0;i<A.size();i++){
//            sum+=A[i];
//            ans=max(sum,ans);
//            sum=max(sum,0);
//        }
//        return ans;
//    }
//};

int main(){
    Solution s = Solution();
    vector<int> nums = {1,-3,4,5};
    cout << s.maxSubArray(nums) << endl;
    return 0;
}