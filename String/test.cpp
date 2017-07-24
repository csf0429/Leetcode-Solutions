//
// Created by 蔡少凡 on 7/24/17.
//

#include <iostream>
using namespace std;

#include <vector>

//class Solution{
//public:
//    int count = 0;
//    int countP(string s){
//        if(s.length() == 0)
//            return 0;
//
//        for(int i = 0 ; i < s.length(); i++){
//            extend(s, i , i);
//            extend(s, i , i+1);
//        }
//
//        return count;
//
//    }
//
//    void extend(string s, int left, int right){
//        while(left >=0 && right < s.length() && s[left] == s[right]){
//            count ++;
//            left --;
//            right ++;
//        }
//    }
//};


class Solution{
public:

    int partition(vector<int> &nums , int left, int right){
        int l = left + 1, r = right;
        int pivot = nums[left];

        while(l <= r){
            if(nums[l] < pivot && nums[r] > pivot)
                swap(nums[l], nums[r]);
            if(nums[l] >= pivot)
                l++;
            if(nums[r] <= pivot)
                r--;
        }
        swap(nums[left],nums[r]);
        return r;
    }

    int findkth(vector<int> &nums, int k){
        int left = 0, right = nums.size() -1;

        while(true){
            int pos = partition(nums,  left, right);
            if(pos == k -1)
                return nums[pos];
            if(pos > k - 1)
                right = pos -1;
            else
                left = pos + 1;

        }

    }

};

int main(){

    string s = "abcba";
    cout << Solution().countP(s) << endl;
    return 0;

}