#include <iostream>
using namespace std;


class Solution {
public:
    bool isPowerOfFour(int num) {
        return ((num&(num-1)) == 0)&&((num&0x55555555) !=0);
    }
};

int main() {
    int num = 4;
    cout << Solution().isPowerOfFour(num) << endl;
    return 0;
}