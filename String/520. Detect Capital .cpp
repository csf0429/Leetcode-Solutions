//
// Created by 蔡少凡 on 6/27/17.
//

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for (char c:word){
            if(c-'A' >=0&& c-'Z'<=0)
                count ++;
        }
        if(count == 0 || count== word.length() || count == 1 && word[0] - 'A' >=0 && word[0] - 'Z'<=0 )
            return true;
        else
            return false;
    }
};

int main() {
    string s = "Google";
    cout << Solution().detectCapitalUse(s) << endl;
    return 0;
}