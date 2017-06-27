//
// Created by 蔡少凡 on 6/27/17.
//


#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int table[26] = {0};
        for(char c:magazine)
            table[c-'a']++;
        for(char c:ransomNote)
            if(--table[c-'a'] < 0) return false;
        return true;
    }
};

int main() {
    string s1 = "ab";
    string s2  = "b";
    cout << Solution().canConstruct(s1,s2) << endl;
    return 0;
}