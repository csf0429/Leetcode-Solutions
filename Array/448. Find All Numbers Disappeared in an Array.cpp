#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int a[10002] ={0};
        vector <int> res;
        for(int i = 0; i < nums.size(); i++){
            a[nums[i]-1] = 1;
        }

        for(int i = 0; i < nums.size(); i++){
            if(a[i] == 0)
                res.push_back(i+1);
        }
        return res;
    }
};

int main() {

}