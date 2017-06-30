//
// Created by 蔡少凡 on 6/30/17.
//

#include <iostream>
using namespace std;

#include <unordered_map>

class Solution {
public:
    int longestPalindrome(string s) {
        if(s.length() == 0)
            return 0;
        unordered_map<char, int> hash;
        int count = 0;
        int no_odd = 1;

        for(int i = 0 ; i < s.length(); i++){
            hash[s[i]]++;
        }

        for(unordered_map<char, int>::iterator it = hash.begin() ; it != hash.end(); it++){
            if(it->second %2 == 0)
                count += it->second;
            else{
                no_odd = 0;
                count = count + it->second - 1;
            }
        }
        return no_odd == 1? count:count+1;
    }
};

int main(){
    string s = "abccccdd";
    cout << Solution().longestPalindrome(s) << endl;
    return 0;
}