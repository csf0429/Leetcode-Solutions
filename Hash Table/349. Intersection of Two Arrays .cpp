//
// Created by 蔡少凡 on 6/30/17.
//

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m(nums1.begin(), nums1.end());
        vector<int> res;
        for(auto a : nums2)
            if(m.count(a)){
                res.push_back(a);
                m.erase(a);
            }
        return res;
    }
};

int main(){

}