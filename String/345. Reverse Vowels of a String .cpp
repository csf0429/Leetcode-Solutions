//
// Created by 蔡少凡 on 6/27/17.
//

//
// Created by 蔡少凡 on 6/27/17.
//

//
// Created by 蔡少凡 on 6/27/17.
//

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


class Solution {
public:
    string reverseVowels(string s) {
        int i=0, j = s.size()-1;
        while(i < j){
            i = s.find_first_of("aeiouAEIOU", i);
            j = s.find_last_of("aeiouAEIOU", j);
            if (i < j){
                swap(s[i++], s[j--]);
            }

        }
        return s;
    }
};


int main() {
    string s = "leetocode";
    s = Solution().reverseVowels(s);
    cout << s  << endl;
    return 0;
}