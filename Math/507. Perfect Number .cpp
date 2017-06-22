//
// Created by 蔡少凡 on 6/21/17.
//

#include <iostream>
using namespace std;

#include <vector>
#include <math.h>


class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1) return false;

        int sum = 1;
        for (int i = 2; i<sqrt(num);i++){
            if(num%i == 0){
                sum += i + num/i;
            }
        }
        return sum == num;
    }
};

int main(){
    cout << Solution().checkPerfectNumber(99999997) << endl;
    return 0;
}