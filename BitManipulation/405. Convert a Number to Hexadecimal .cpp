//
// Created by 蔡少凡 on 7/2/17.
//

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<char> map= {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    string toHex(int num) {
        if(num == 0) return "0";
        string result = "";
        int count = 0;
        while (num !=0 && count ++ < 8){
            result = map[(num&15)] + result;
            num = (num >> 4);
        }
        return result;
    }
};

int main() {
    int num = -1;
    cout << Solution().toHex(num) << endl;
    return 0;
}