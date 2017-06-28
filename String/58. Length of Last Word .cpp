//
// Created by 蔡少凡 on 6/27/17.
//

//
// Created by 蔡少凡 on 6/27/17.
//

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int tail = s.length()-1;
        while(tail >=0 && s[tail] == ' '){
            tail--;
        }
        for (int i = tail; i >=0 && s[i] != ' ' ; i--){
            if(s[i]!=' ')
                count++;

        }
        return count;
    }
};

int main() {
    string s = "world   ";
    int l = Solution().lengthOfLastWord(s);
    cout << l << endl;
    return 0;
}