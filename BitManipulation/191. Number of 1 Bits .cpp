//
// Created by 蔡少凡 on 7/3/17.
//

#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count  = 0;
        while (n){
            ++count;
            n &= (n-1);
        }
        return count;
    }
};

int main(){
    uint32_t x = 11;
    cout << Solution().hammingWeight(x) << endl;
    return 0;

}