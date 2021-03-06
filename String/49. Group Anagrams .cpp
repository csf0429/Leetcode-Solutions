//
// Created by 蔡少凡 on 7/23/17.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

class Solution{
public:
    vector<vector<string >> groupAnagrams(vector<string >& strs){
        unordered_map<string, multiset<string> > mp;
        for(string s:strs){
            string t = s;
            sort(t.begin(), t.end());
            mp[t].insert(s);
        }

        vector<vector<string>> anagrams;
        for(auto m : mp){
            vector<string> anagram(m.second.begin(), m.second.end());
            anagrams.push_back(anagram);
        }
        return anagrams;
    }

 };

int main(){
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    return 0;

}