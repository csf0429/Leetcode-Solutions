//
// Created by 蔡少凡 on 6/13/17.
//

#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
#include <algorithm>


// hash-map
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++){
            if(++counts[nums[i]] > n/2)
                return nums[i];
        }

    }
};

//sort
//class Solution {
//public:
//    int majorityElement(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        return nums[nums.size()/2];
//    }
//};

int main(){
    vector<int > nums = {5,5,5,5,5,3};
    cout << Solution().majorityElement(nums) << endl;
}