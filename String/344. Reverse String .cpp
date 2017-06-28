//
// Created by 蔡少凡 on 6/27/17.
//

#include <iostream>
#include <string>
using namespace std;

//class Solution {
//public:
//    string reverseString(string s) {
//        reverse(s.begin(),s.end());
//        return s;
//    }
//};

class Solution {
public:
    string reverseString(string s) {
        int i = 0, j = s.size()-1;
        while (i < j){
            swap(s[i++], s[j--]);
        }
    }
};


int main() {
    string s = "abcde ddda eeees dd";
    s = Solution().reverseString(s);
    cout << s << endl;
    return 0;
}