//
// Created by 蔡少凡 on 7/3/17.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int diff = 0;
        for(int i:nums)
            diff ^= i;
        diff &=(-diff);     //get last diff bit

        int res1 = 0, res2 = 0;
        for(int i : nums){
            if((diff & i) == 0)
                res1 ^= i;
            else
                res2 ^= i;
        }
        return vector<int> {res1,res2};
    }
};


int main(){

    vector<int> res;
    vector<int> nums = {1, 2, 1, 3, 2, 5};
    cout <<  Solution().singleNumber(nums)[0] << endl;
    cout << Solution().singleNumber(nums)[1]  << endl;
    return 0;
}