//
// Created by 蔡少凡 on 6/20/17.
//
#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(!rowIndex)
            return vector<int> {1};
        vector<vector<int>> result(rowIndex+1);
        for(int i=0; i<rowIndex+1; i++){
            for(int j=0; j < i+1; j++){
                if(j==0 || j == i)
                    result[i].push_back(1);
                else{
                    result[i].push_back(result[i-1][j-1] + result[i-1][j]);
                }
            }
        }
        return result[rowIndex];
    }
};