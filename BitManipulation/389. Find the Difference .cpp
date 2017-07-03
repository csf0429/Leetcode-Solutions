//
// Created by 蔡少凡 on 7/3/17.
//

#include <iostream>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;
        for(char c:s)
            result ^=c;
        for(char c:t)
            result ^=c;
        return result;
    }
};

int main(){
    string a,b;
    cout << Solution().findTheDifference("abcd","abcde") << endl;
}