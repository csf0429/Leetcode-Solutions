//
// Created by 蔡少凡 on 5/30/17.
//

#include <iostream>
using namespace std;

//class Solution {
//public:
//    int count = 0;
//    int climbStairs(int n) {
//        int a=1,b=1;
//        while(n--){
//            a = (b+=a)-a;
//        }
//        return a;
//    }
//
//};

class Solution{
public:
    int climbStairs(int n){
        if( n == 0 || n == 1 || n == 2) return n;
        int dp[1005];
        dp[0] = 1;
        dp[1] = 2;
        for(int i=2; i<n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n-1];
    }
};
int main(){
    Solution s = Solution();
    cout << s.climbStairs(5) << endl;
    return 0;
}