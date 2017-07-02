//
// Created by 蔡少凡 on 7/2/17.
//

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int findComplement(int num) {
        unsigned mask = ~0;
        while(num & mask) mask = mask << 1;
        return (~mask & ~num);

    }
};

int main() {
    cout << Solution().findComplement(5) << endl;
    return 0;
}