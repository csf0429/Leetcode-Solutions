//
// Created by 蔡少凡 on 6/10/17.
//
#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>

//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        vector <int> res;
//        for(int i =0 ;i < nums.size()-1; i++){
//            for(int j=i+1;j<nums.size(); j++ ){
//                if(nums[i] + nums[j] == target){
//                    res.push_back(i);
//                    res.push_back(j);
//                    return res;
//                }
//            }
//        }
//        return res;
//    }
//};
class Solution{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        //Key is the number and value is its index in the vector.
        unordered_map<int, int> hash;
        vector<int> result;
        for (int i = 0; i < numbers.size(); i++) {
            int numberToFind = target - numbers[i];

            //if numberToFind is found in map, return them
            if (hash.find(numberToFind) != hash.end()) {
                //+1 because indices are NOT zero based
                result.push_back(hash[numberToFind] );
                result.push_back(i );
                return result;
            }

            //number was not found. Put it in the map.
            hash[numbers[i]] = i;
        }
        return result;
    }
};
int main(){
    return 0;
}