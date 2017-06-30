//
// Created by 蔡少凡 on 6/30/17.
//

#include <iostream>
using namespace std;

#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> hash;
        vector<string> res;
        int minSum = INT_MAX;
        for(int i = 0; i < list1.size(); i++){
            hash[list1[i]] = i+1;
        }

        for(int i = 0; i < list2.size(); i++){
              int j = hash[list2[i]];
            if( i + j <= minSum && j!=0){
                if(i + j < minSum){ res.clear(); minSum = i+j;}
                res.push_back(list2[i]);
            }
        }
        return res;
    }
};

int main(){
    vector<string> s1 = {"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string> s2 = {"Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"};

    vector<string> res;
    res = Solution().findRestaurant(s1,s2);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << endl;
    }
    return 0;

}