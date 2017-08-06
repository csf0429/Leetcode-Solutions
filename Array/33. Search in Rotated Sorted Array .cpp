//
// Created by 蔡少凡 on 8/5/17.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0; int end = nums.size()-1;
        if(nums.size() == 0)
            return -1;

        while(start < end){

            int mid = (start + end) / 2 ;
            if(target == nums[mid])
                return mid;

            if(nums[start] <= nums[mid]){
                if(target >= nums[start] && target < nums[mid]){
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }

            }
            else{
                if(target > nums[mid] && target <= nums[end]){
                    start = mid + 1;
                }else{
                    end = mid -1;
                }

            }
        }
        return nums[start] == target ? start:-1;

    }
};

int main(){
    vector<int > nums = {5,1,3};
    cout << Solution().search(nums,1) << endl;
    return 0;
}