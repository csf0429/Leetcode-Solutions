//
// Created by 蔡少凡 on 6/15/17.
//

#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
#include <numeric>


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        for(int i=0; i<numRows; i++){
            for(int j=0; j < i+1; j++){
                if(j==0 || j == i)
                    result[i].push_back(1);
                else{
                    result[i].push_back(result[i-1][j-1] + result[i-1][j]);
                }
            }
        }
        return result;
    }
};

int main(){
    vector<vector<int>> result;
    result = Solution().generate(5);

    return 0;
}