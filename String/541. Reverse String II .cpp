//
// Created by 蔡少凡 on 6/27/17.
//

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int j = 0;
        for (int i = 0; i < s.length(); i += 2 * k) {
            j = i + k;
            if (j > s.length())
                j = s.length();
            reverse(s.begin() + i, s.begin() + j);
        }
        return s;
    }
};

int main() {
    string s = "hyzqyljrnigxvdtneasepfahmtyhlohwxmkqcdfehybknvdmfrfvtbsovjbdhevlfxpdaovjgunjqlimjkfnqcqnajmebeddqsgl";
    s = Solution().reverseStr(s,139);
    cout << s << endl;
    return 0;
}