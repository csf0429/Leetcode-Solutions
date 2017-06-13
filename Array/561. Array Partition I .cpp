//
// Created by 蔡少凡 on 6/13/17.
//

#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        if(nums.empty())
            return 0;
        sort(nums.begin(),nums.end());
        int sum = 0;
        for(int i = 0; i < nums.size()/2; i++)
            sum += nums[2*i];
        return sum;
    }
};

int main(){
    vector <int> nums = {1,4,3,2};
    cout << Solution().arrayPairSum(nums) << endl;
}