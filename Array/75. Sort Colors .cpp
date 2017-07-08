//
// Created by 蔡少凡 on 7/8/17.
//

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt_red = 0;
        int cnt_white = 0;
        int cnt_blue = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) cnt_red++;
            if(nums[i] == 1) cnt_white++;
            if(nums[i] == 2) cnt_blue++;
        }

        for(int i = 0; i < nums.size(); i++){
            if(cnt_red > 0) {
                nums[i] = 0;
                cnt_red--;
            }
            else if (cnt_white > 0){
                cnt_white--;
                nums[i] = 1;
            }
            else
                nums[i] = 2;
        }
    }
};

int main(){

}