//
// Created by 蔡少凡 on 6/27/17.
//

#include <iostream>
#include <string>
using namespace std;

//class Solution {
//public:
//    int countSegments(string s) {
//        int count = 0;
//        int blank_flag = 0;
//        if (s =="")
//            return 0;
//        if (s.length() == 1 && s[0] != ' ')
//            return 1;
//        for(int i = 1; i < s.length(); i++){
//            if(s[i] != ' ')
//                blank_flag = 1;
//            if(s[i]==' '&& s[i-1] != ' '|| s[i+1] == '\0'&&s[i] != ' '){
//                count ++;
//            }
//        }
//        if( blank_flag == 0)
//            count = 0;
//
//        return count;
//    }
//};

class Solution {
public:
    int countSegments(string s) {
        int cnt=0;
        int len=s.size();
        s.push_back(' ');
        for(int i=0;i<len;++i){
            if(s[i]!=' '&&s[i+1]==' ')
                cnt++;
        }
        return cnt;
    }
};

int main() {
    string s = "a, b, c";
    cout << Solution().countSegments(s) << endl;
    return 0;
}