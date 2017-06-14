//
// Created by 蔡少凡 on 6/14/17.
//

#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
#include <numeric>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long n = nums.size();
        return n*(n+1)/2 - accumulate(nums.begin(),nums.end(),0);

    }
};

int main(){

}