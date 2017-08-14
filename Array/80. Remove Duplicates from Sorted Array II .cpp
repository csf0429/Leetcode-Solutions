//
// Created by 蔡少凡 on 8/6/17.
//

#include <iostream>
using namespace std;

#include <vector>
#include <unordered_map>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        int count = 0;
        unordered_map<int,int> map;
        for(int i = 0 ; i < length ; i++){
            map[nums[i]] ++;
            if(map[nums[i]] > 2) {
                continue;
            }
            count++;
            nums[count-1] = nums[i];

        }
        return count;
    }

};


int main(){
    vector<int> nums = {1,2};
    cout << Solution().removeDuplicates(nums) << endl;

    for(int i = 0 ; i < nums.size(); i++){
        cout <<nums[i] <<" "<< endl;
    }

    return 0;

}