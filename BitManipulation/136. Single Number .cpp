//
// Created by 蔡少凡 on 7/2/17.
//

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < nums.size(); i++){
            result ^= nums[i];
        }
        return result;
    }
};

int main() {
    vector<int> nums = {1,2,3,4,5,1,2,3,4};
    cout << Solution().singleNumber(nums) << endl;
    return 0;
}