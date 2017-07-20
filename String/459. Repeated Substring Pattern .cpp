//
// Created by 蔡少凡 on 7/11/17.
//

#include <iostream>
using namespace std;

#include "string.h"

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int l = s.length();
        for(int i = l/2; i >0; i--){
            if( l%i==0 ){
                int m = l / i;
                string temp;
                string substr = s.substr(0, i);
                for (int j = 0; j < m; j++) {
                    temp.append(substr);
                }
                if (temp.compare(s) == 0) return true;
            }
        }
        return false;
    }
};

int main(){
    string a = "abab";
    cout << Solution().repeatedSubstringPattern(a) << endl;
    //cout << a.compare("aba") << endl;
    return 0;

}