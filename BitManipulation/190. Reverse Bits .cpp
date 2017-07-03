//
// Created by 蔡少凡 on 7/3/17.
//

#include <iostream>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i = 0; i< 32; i++){
            result = (result<<1) + (n>>i&1);
        }
        return  result;
    }
};

int main(){

}