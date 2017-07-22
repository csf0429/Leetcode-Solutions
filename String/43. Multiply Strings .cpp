//
// Created by 蔡少凡 on 7/22/17.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    string multiply(string num1, string num2){
        vector<int> result (num1.size() + num2.size(), 0);

        for(int i = num1.size()-1; i >=0; i--){
            for(int j = num2.size()-1; j>=0; j--){
                int mul = (num1[i] - '0') * (num2[j]-'0');
                int sum =  mul + result[i+j+1];
                result[i+j+1] = sum % 10;
                result[i+j] += sum/10;
            }
        }


//        for(int num:result){
//            cout << num << endl;
//        }
        string str = "";
        int j = 0;
        for(int num:result){
            if(str.size() == 0 && num == 0)
                continue;
            else{
                str += (num + '0');
            }
        }
        if(str.size() > 0)
            return str;
        else
            return "0";
    }
};

int main(){

    string num1 = "0";
    string num2 = "0";
    cout << Solution().multiply(num1, num2) << endl;
    return 0;

}