//
// Created by 蔡少凡 on 5/27/17.
//

#include <iostream>
#include <vector>
#include "math.h"
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 99999;
        int profit = 0;
        for(int i=0; i< prices.size(); i++){
            buy = min(buy,prices[i]);
            if(prices[i] - buy > profit)
                profit = prices[i] - buy;
        }
        return profit;
    }
};