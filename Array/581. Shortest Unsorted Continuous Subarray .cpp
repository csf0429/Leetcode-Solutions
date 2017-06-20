//
// Created by 蔡少凡 on 6/20/17.
//

#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int begin = -1, end = -2;
        int minimum = nums[nums.size()-1];
        int maximum = nums[0];
        int n = nums.size();
        for (int i=0; i< n;i++){
            minimum = min(minimum, nums[n-i-1]);
            maximum = max(maximum, nums[i]);
            if(nums[i] < maximum) end=i;
            if(nums[n-i-1] > minimum) begin = n-i-1;
        }
        cout << begin << "" << end << endl;
        return end - begin + 1;
    }
};

int main(){
    vector<int> nums = {2,6,4,8,10,9,15};
    cout << Solution().findUnsortedSubarray(nums) << endl;
    return 0;
}