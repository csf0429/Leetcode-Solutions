//
// Created by 蔡少凡 on 7/8/17.
//

#include <iostream>
using namespace std;
#include <vector>
#include <set>
int dp[1000][1000];

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.empty())
            return 0;
        int m = grid.size(), n = grid[0].size();

        dp[0][0] = grid[0][0];
        for(int i = 1; i < m ; i++)
            dp[i][0] = dp[i-1][0] + grid[i][0];

        for(int j = 1; j < n; j++)
            dp[0][j] = dp[0][j-1] + grid[0][j];

        for(int i = 1 ;i < m; i++){
            for(int j = 1; j < n; j ++){
                dp[i][j] = min(dp[i-1][j] +  grid[i][j],
                               dp[i][j-1] +  grid[i][j]);
                cout << "i = " << i << " j=" << j << endl;
            }
        }
        return dp[m-1][n-1];
    }
};

int main(){
    vector<vector<int> > nums = {{1,3,1},{1,5,1},{4,2,1}};
    cout << Solution().minPathSum(nums) << endl;

    //cout << dp[0][2] << endl;
    return 0;
}