//
// Created by 蔡少凡 on 6/21/17.
//

#include <iostream>
using namespace std;
#include <vector>
#include <set>

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> top3;
        for(int num:nums){
            top3.insert(num);
            if(top3.size()>3)
                top3.erase(top3.begin());
        }
        return top3.size() == 3 ? *top3.begin():*top3.rbegin();
    }
};

int main(){
    vector<int> nums = {3,2};
    cout << Solution().thirdMax(nums) << endl;
    return 0;
}