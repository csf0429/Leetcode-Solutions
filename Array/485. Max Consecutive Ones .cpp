//
// Created by 蔡少凡 on 6/13/17.
//

#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int count = 0, max = 0;
        for(int i =0; i < nums.size(); i++){
            if(nums[i] == 1)
                count ++;
            else
                count = 0;
            if(count > max){
                max = count;
            }
        }
        return max;
    }
};

int main(){

}