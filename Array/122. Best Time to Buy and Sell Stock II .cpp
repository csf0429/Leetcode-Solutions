//
// Created by 蔡少凡 on 6/14/17.
//

#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(!prices.empty())
            return 0;
        int ret = 0;
        for(int p=1; p < prices.size(); p++)
            ret += max(prices[p] - prices[p-1], 0);

        return ret;
    }
};

int main(){

}