//
// Created by 蔡少凡 on 7/6/17.
//

#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        bool notprime[9000000] = {false};
        int count = 0;
        for (int i = 2 ; i < n; i ++){
            if(notprime[i] == false){
                count ++;
                for(int j = 2; i*j < n; j++){
                    notprime[i*j] = true;
                }
            }
        }
        return count ;
    }
};

int main(){
    cout << Solution().countPrimes(49979) << endl;
}