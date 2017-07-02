//
// Created by 蔡少凡 on 7/2/17.
//

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int hammingDistance(int x, int y) {
        int dist = 0,  n = x ^ y;
        while (n){
            ++ dist;
            n &= n - 1;//num, num & (num - 1)可以快速地移除最右边的bit 1
        }
        return dist;
    }
};

int main() {
    cout << Solution().hammingDistance(1,24) << endl;
    return 0;
}