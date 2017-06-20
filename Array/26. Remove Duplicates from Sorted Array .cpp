//
// Created by 蔡少凡 on 6/20/17.
//

#include <iostream>
using namespace std;
#include <vector>


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 2) return nums.size();
        int count = 1;
        vector<int> result;
        for(int i=1; i< nums.size();i++){
            if(nums[i] != nums[i-1])
                nums[count++] = nums[i];
        }
        return count;

    }
};

int main(){
    vector<int> num ={1,1};
    cout << Solution().removeDuplicates(num) << endl;
}