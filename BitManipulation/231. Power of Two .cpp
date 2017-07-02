//
// Created by 蔡少凡 on 7/2/17.
//

#include <iostream>
using namespace std;


class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0&((n&(n-1))==0);
    }
};

int main() {
    int num = 0;
    cout << Solution().isPowerOfTwo(num) << endl;
    return 0;
}