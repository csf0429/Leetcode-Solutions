//
// Created by 蔡少凡 on 6/28/17.
//


#include <iostream>
#include <string.h>
using namespace std;

#include <sstream>

#include <unordered_map>

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, int>  p2i;
        unordered_map<string,int> w2i;
        istringstream in(str);
        int i = 0, n = pattern.size();
        for(string word; in >> word; ++i){
            if(i == n || p2i[pattern[i]] != w2i[word])
                return false;
            p2i[pattern[i]] = w2i[word] = i+1;
        }
        return i == n;
    }
};
int main(){
    string s1 = "abbad";
    string s2 = "dog cat cat dog";
    cout << Solution().wordPattern(s1, s2) << endl;
    return 0;
}