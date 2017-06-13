//
// Created by 蔡少凡 on 6/11/17.
//

#include <iostream>
using namespace std;

#include <vector>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int plus = 1;
        for(int i = digits.size()-1 ;i >=0;i--){
            if(digits[i] == 9 && plus == 1){
                digits[i] = 0;
                if(i==0)
                    digits.insert(digits.begin(),1);
            }else{
                digits[i] = digits[i] + plus;
                plus = 0;

            }
        }
        return digits;
    }

};

int main(){
    vector<int> digits = {9,9,9,9};
    vector<int> res = Solution().plusOne(digits);

    for(int i=0; i<res.size();i++){
        cout << res[i] ;
    }

}