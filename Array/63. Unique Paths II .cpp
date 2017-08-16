//
// Created by 蔡少凡 on 8/15/17.
//

//
// Created by 蔡少凡 on 8/15/17.
//

#include <iostream>
using namespace std;

#include <vector>

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int m = obstacleGrid.size(), n = obstacleGrid[0].size();

        if(obstacleGrid[m-1][n-1] == 1)
            return 0;

        vector<vector <int>> map (m, vector<int> (n,0));
        int rflag = 0 ; int cflag = 0;
        for(int i = 0 ; i < m ; i ++){
            if(obstacleGrid[i][n-1] == 0 && rflag ==0){
                map[i][n-1] = 1;
                rflag = 1;
            }
            else
                map[i][n-1] = 0;
        }

        for(int j = 0 ; j < n ; j++){
            if(obstacleGrid[m-1][j] == 0 && cflag == 0){
                map[m-1][j] = 1;
                cflag = 1;
            }
            else
                map[m-1][j] = 0;
        }

        if(m != 1 && n != 1){
            for(int i = m-2 ; i >=0 ; i--){
                for(int j = n-2 ; j >=0; j--){
                    if(obstacleGrid[i][j] != 1){
                        if(obstacleGrid[i][j+1] == 1 && obstacleGrid[i+1][j] == 1){
                            map[i][j] = 0;
                        } else{
                            map[i][j] = map[i+1][j] + map[i][j+1];
                        }
                    }else{
                        map[i][j] = 0;
                    }
                }
            }
        }
        return map[0][0];
    }
};

int main(){
//    cout << Solution().uniquePaths(1,2) << endl;
    cout << "hello" << endl;
    vector<vector <int>> matrix = {{0,0},{1,1},{0,0}};
    cout << Solution().uniquePathsWithObstacles(matrix) << endl;
    return 0;

}