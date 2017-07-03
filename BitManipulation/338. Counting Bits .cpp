//
// Created by 蔡少凡 on 7/3/17.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result;
        for(int i = 0 ;i <= num; i++){
            int temp = i;
            int count = 0;
            while(temp){
                count ++;
                temp &= temp - 1;
            }
            result.push_back(count);
        }
        return result;
    }
};

int main(){
    vector<int> res;
    res = Solution().countBits(5);
    for(int i = 0 ; i < res.size(); i++){
        cout << res[i] << endl;
    }
    return 0;
}