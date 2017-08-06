//
// Created by 蔡少凡 on 8/5/17.
//

//
// Created by 蔡少凡 on 8/5/17.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0; int end = nums.size()-1;
        if(nums.size() == 0)
            return false;

        while(start <= end){

            int mid = (start + end) / 2 ;
            if(target == nums[mid])
                return true;

            if(nums[start] == nums[mid] && nums[mid] == nums[end]){
                ++start;
                --end;
            }else if(nums[start] <= nums[mid]){
                if(target < nums[mid] && target >= nums[start]){
                    end = mid - 1;
                }else{
                    start = mid+1;
                }
            }else{
                if(target <= nums[end] && target > nums[mid])
                    start = mid+1;
                else
                    end = mid-1;
            }
        }
        return false;

    }
};

int main(){
    vector<int > nums = {5,1,3};
    cout << Solution().search(nums,2) << endl;
    return 0;
}