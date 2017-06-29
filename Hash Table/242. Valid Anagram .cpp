//
// Created by 蔡少凡 on 6/28/17.
//

#include <iostream>
#include <string.h>
using namespace std;

#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> table;
        for(char c:s){
            table[c] ++;
        }

        for(char c:t){
            table[c]--;
        }
        for(int i=0; i<table.size();i++){
            if(table[i] != 0)
                return false;
        }
        return true;

    }
};

int main(){
    string s1 = "baad";
    string s2 = "abac";
    cout << Solution().isAnagram(s1, s2) << endl;
    return 0;
}