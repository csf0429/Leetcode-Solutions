//
// Created by 蔡少凡 on 7/8/17.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        for(int idx = 0 ; strs.size()>0; prefix+=strs[0][idx], idx ++){
            for(int i = 0 ; i < strs.size(); i++)
                if(idx >= strs[i].size() || (i>0 && strs[i][idx] != strs[i-1][idx]))
                    return prefix;
        }
        return prefix;
    }
};

int main(){

}