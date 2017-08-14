//
// Created by 蔡少凡 on 8/14/17.
//
#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0)
            return false;
        int row = matrix.size();
        int column = matrix[0].size();

        int l = 0 , r = row * column - 1;

        while(l != r){
            int mid = (l+r)/2;

            if(matrix[mid/column][mid%column] < target)
                l = mid+1;
            else
                r = mid;

        }
        return matrix[r/column][r%column] == target;

    }

};

//        while(clow <= chigh && rlow <= rhigh){
//            int cmid = (clow + chigh)/2;
//            int rmid = (rlow + rhigh)/2;
//            if(matrix[rmid][cmid] == target)
//                return true;
//
//            if(matrix[rmid][cmid] < target){
//                rlow = rmid;
//                clow = cmid;
//            }else{
//                rhigh = rmid;
//                chigh = cmid;
//            }
//
//
//        }
//        return false;