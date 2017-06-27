#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                int j = i;
                for(;j<s.length()&&s[j]!=' ';j++){ }
                reverse(s.begin()+i, s.begin()+j);
                i = j;
            }
        }
        return s;
    }
};

int main() {
    string s = "abcde ddda eeees dd";
    s = Solution().reverseWords(s);
    cout << s << endl;
    return 0;
}