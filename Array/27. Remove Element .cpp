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
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty())
            return 0;
        int counts = 0;
        for(vector<int>::iterator it = nums.begin(); it != nums.end();){
            if(*it == val)
                it = nums.erase(it);
            else
                ++it;
        }

        return nums.size();
    }
};

int main(){
    vector <int> nums = {3,2,2,3};
    Solution().removeElement(nums, 3);
    cout << nums.size()<< endl;
    return 0;
}