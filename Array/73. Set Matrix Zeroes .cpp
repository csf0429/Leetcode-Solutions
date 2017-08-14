//
// Created by 蔡少凡 on 8/13/17.
//

#include <iostream>
using namespace std;

#include <vector>

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row_zero (matrix.size(),0);
        vector<int> column_zero (matrix[0].size(),0);

        for(int i = 0 ; i < matrix.size(); i ++){
            for(int j = 0 ; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0 ){

                    for (int r = 0; r < matrix.size(); r++)
                        matrix[r][j] = 0;
                    for (int c = 0; c < matrix[0].size(); c++)
                        matrix[i][c] = 0;

                }
//                row_zero[i] = 1;
//                column_zero[j] = 1;
            }
        }

    }
};

int main(){

}