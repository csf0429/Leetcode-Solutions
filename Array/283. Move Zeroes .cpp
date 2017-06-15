//
// Created by 蔡少凡 on 6/14/17.
//

#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[j++] = nums[i];
            }
        }

        for(;j<nums.size(); j++){
            nums[j] = 0;
        }
    }
};


int main(){

}