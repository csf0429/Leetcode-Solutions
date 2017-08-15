//
// Created by 蔡少凡 on 8/15/17.
//

#include <iostream>
using namespace std;

#include <vector>

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int> > map(m,vector<int> (n,0));

        for(int i = 0 ; i < m ; i++){
            map[i][n-1] = 1;
        }

        for(int j = 0 ; j < n ; j++){
            map[m-1][j] = 1;
        }
        if(m != 1 && n != 1) {
            for (int i = m - 2; i >= 0; i--) {
                for (int j = n - 2; j >= 0; j--) {
                    map[i][j] = map[i + 1][j] + map[i][j + 1];
                }
            }
        }
        return map[0][0];

    }
};


int main(){
    cout << Solution().uniquePaths(1,2) << endl;

}