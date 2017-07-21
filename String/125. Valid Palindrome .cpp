//
// Created by 蔡少凡 on 7/21/17.
//

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(char c:s){
            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >='0') && (c <= '9')){
                if(c >= 'A' && c <= 'Z'){
                    c = c - 'A' + 'a';
                }
                str += c;
            }

        }

        cout << str << endl;
        int i = 0 , j = str.length()-1;
        while(i<= j && str[i] == str[j]){
            i++;
            j--;
        }
        cout << i << " " << j << endl;
        if(i >= j)
            return true;
        else
            return false;
    }
};

int main(){
    string s = "0P";
    cout << Solution().isPalindrome(s) << endl;
    return 0;

}