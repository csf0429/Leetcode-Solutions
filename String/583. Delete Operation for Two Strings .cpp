//
// Created by 蔡少凡 on 7/23/17.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int minDistance(string s1, string s2){
        int l1 = s1.size(), l2 = s2.size();
        vector<vector<int>> res(l1 + 1, vector<int>(l2 + 1,0));

        for(int i = 1; i <= l1; i++){
            for(int j = 1; j <= l2; j++){
                if(s1[i-1] == s2[j-1])
                    res[i][j] = 1 + res[i-1][j-1];
                else
                    res[i][j] = max(res[i-1][j], res[i][j-1]);
            }
        }
        return s1.size() + s2.size() - 2 * res[l1][l2];

    }
};

int main(){
    string s1 = "aabcd";
    string s2 = "acbbd";

    cout << Solution().minDistance(s1, s2) << endl;
    return 0;

}