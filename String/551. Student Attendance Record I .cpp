//
// Created by 蔡少凡 on 6/27/17.
//
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int cout_a = 0;
        int continue_l=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'A') cout_a++;
            if(i>0 && (s[i]=='L'&&s[i-1]=='L'))
                continue_l ++;
            if(s[i] !='L') continue_l = 0;
            if(cout_a>1 || continue_l > 1)
                return false;
        }
        return true;
    }
};

int main(){
    string s = "PPALLL";
    cout << Solution().checkRecord(s);
    return 0;
}