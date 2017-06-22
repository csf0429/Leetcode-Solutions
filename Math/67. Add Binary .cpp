//
// Created by 蔡少凡 on 6/21/17.
//
#include <iostream>
using namespace std;

#include <string>
#include "math.h"


class Solution {
public:
    string addBinary(string a, string b) {
        string s = "";
        int c = 0, i = a.size()-1, j = b.size()-1;
        while (i >= 0 || j >= 0 || c ==1){
            c += i >= 0 ? a[i--]-'0':0;
            c += j >= 0 ? b[j--]-'0':0;

            s = char(c%2 + '0') + s;
            c /= 2;
        }
        return s;
    }
};

int main(){
    string a ="01";
    string b = "11";
    cout <<Solution().addBinary(a,b)<<endl;
}