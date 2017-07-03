//
// Created by 蔡少凡 on 7/3/17.
//

#include <iostream>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        int sum = a;
        while(b!=0){
            sum = a ^ b;
            b = (a & b) << 1;
            a = sum;
        }
        return sum;
    }
};

int main(){
    cout << Solution().getSum(2,3) << endl;
}