//
// Created by 蔡少凡 on 6/27/17.
//

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findLUSlength(string a, string b) {
        return a==b ? -1:max(a.length(),b.length());
    }
};

int main() {
    string s1 = "leetocode";
    string s2 = "leetcode123";

    cout << Solution().findLUSlength(s1,s2)  << endl;
    return 0;
}