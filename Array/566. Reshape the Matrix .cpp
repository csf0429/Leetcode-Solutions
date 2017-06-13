//
// Created by 蔡少凡 on 6/11/17.
//

#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(nums.size()*nums[0].size() != r*c )
            return nums;

        vector<vector<int>> res;
        vector<int> column;
        int row, col = 0;
        for(int i = 0; i < nums.size(); i++){
            for (int j = 0; j< nums[0].size(); j++){
                if(col < c && row < r){
                    column.push_back(nums[i][j]);
                    col ++;
                    if(col == c) {
                        col = 0;
                        res.push_back(column);
                        column.clear();
                        row++;
                    }
                }
            }
        }
        return res;
    }
};
//class Solution {
//public:
//    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
//        int m = nums.size(), n = nums[0].size();
//        if (m * n != r * c) {
//            return nums;
//        }
//
//        vector<vector<int>> res(r, vector<int>(c, 0));
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                int k = i * n + j;
//                res[k / c][k % c] = nums[i][j];
//            }
//        }
//
//        return res;
//    }
//};
int main (){
    vector<vector<int>> nums = {{1,2},{3,4}};
    vector<vector<int>> res;
    res = Solution().matrixReshape(nums, 4, 1);
    for(int i = 0; i < res[0].size(); i ++)
        cout << res[0][i] << endl;
    return 0;
}