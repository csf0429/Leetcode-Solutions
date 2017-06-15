//
// Created by 蔡少凡 on 6/14/17.
//

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <unordered_map>

//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums) {
//        if(nums.empty())
//            return false;
//        sort(nums.begin(),nums.end());
//        for(int i=1; i< nums.size(); i++)
//        {
//            if(nums[i-1] == nums[i])
//                return true;
//        }
//        return false;
//    }
//};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> hash;
        for(int i=0; i<nums.size();i++)
        {
            hash[nums[i]] ++ ;
            if(hash[nums[i]] >=2)
                return true;
        }
        return false;
    }
};

int main(){

}
