//
// Created by 蔡少凡 on 8/5/17.
//

#include <iostream>
using namespace std;

#include <vector>

//class Solution {
//public:
//    int findMin(vector<int>& nums) {
//        int length = nums.size();
//        if(nums[0] > nums[length-1]){
//            for(int i = length -1; i >=1 ; i--){
//                if(nums[i-1] > nums[i])
//                    return nums[i];
//            }
//        }else
//            return nums[0];
//
//    }
//};

class Solution {
public:
    int findMin(vector<int> &nums) {
        int start = 0 , end = nums.size() - 1;
        while(start < end) {
            if (nums[start] < nums[end])
                return nums[start];

            int mid = (start + end) / 2;

            if(nums[mid] >= nums[start]){
                start = mid + 1;
            }else{
                end = mid;
            }
        }
        return nums[start];

    }
};

int main(){
    vector<int > nums = {3,1,2};
    cout << Solution().findMin(nums) << endl;
    return 0;

}