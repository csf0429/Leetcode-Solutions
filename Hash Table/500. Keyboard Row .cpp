//
// Created by 蔡少凡 on 7/3/17.
//

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> map;
        vector<string> res ;
        string s1 = "qwertyuiopQWERTYUIOP";
        string s2 = "asdfghjklASDFGHJKL";
        string s3 = "zxcvbnmZXCVBNM";

        for(char c:s1) map[c] = 1;
        for(char c:s2) map[c] = 2;
        for(char c:s3) map[c] = 3;

        for (string word:words){
            int diff = 0;
            for(int i = 0; i < word.length()-1; i++){
                if(map[word[i]] != map[word[i+1]])
                    diff = 1;
            }
            if(diff == 0)
                res.push_back(word);
        }
        return res;
    }
};

int main(){

}