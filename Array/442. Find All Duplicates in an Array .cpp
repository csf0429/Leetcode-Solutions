//
// Created by 蔡少凡 on 6/20/17.
//

#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i = 0;
        vector<int> res;
        while (i<nums.size()){
            if(nums[i]!=nums[nums[i]-1]) swap(nums[i], nums[nums[i]-1]);
            else i++;
        }
        for(i=0; i<nums.size();i++){
            if(nums[i]!=i+1)
                res.push_back(nums[i]);
        }
        return res;

    }
};

int main(){
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> result;
    result = Solution().findDuplicates(nums);
    for(int i=0;i<result.size();i++){
        cout << result[i] << endl;
    }
    return 0;
}