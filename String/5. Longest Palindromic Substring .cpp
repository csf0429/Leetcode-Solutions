//
// Created by 蔡少凡 on 7/20/17.
//

#include <iostream>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        for(int i = 0 ; i < s.size() - 1; i ++){
            extendPalindrome(s, i, i);
            extendPalindrome(s, i, i+1);
        }
        return s.substr(begin, maxlen);
    }

    void extendPalindrome(string s, int i, int j){
        while(i >=0 && j < s.length() && s[i] == s[j]){
            i--;
            j++;
        }

        if(maxlen < j - i - 1){
            maxlen = j - i - 1;
            begin = i+1;
        }
    }

private:
    int begin = 0, maxlen=-1;
};

int main(){
    string s = "cbbd";
    cout << Solution().longestPalindrome(s) << endl;
    //cout << s.substr()  << endl;
    return 0;

}