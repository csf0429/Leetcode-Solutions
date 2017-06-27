//
// Created by 蔡少凡 on 6/27/17.
//


#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    string countAndSay(int n){
        if (n == 0) return "";
        string res = "1";
        while(--n) {
            string cur = "";
            for (int i = 0; i < res.size(); i++) {
                int count = 1;
                while ((i + 1 < res.size()) && (res[i] == res[i + 1])) {
                    count++;
                    i++;
                }
                cur += to_string(count) + res[i];
            }
            res = cur;
        }
        return res;
    }
};

int main() {
    cout << Solution().countAndSay(1) << endl;
    return 0;
}