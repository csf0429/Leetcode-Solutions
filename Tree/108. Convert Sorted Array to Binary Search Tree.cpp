//
// Created by 蔡少凡 on 4/18/17.
//
#include <iostream>
#include <vector>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        if(nums.size() == 1) return new TreeNode(nums[0]);

        int mid = nums.size()/2;
        TreeNode *root =  new TreeNode(nums[mid]);

        vector<int> left(nums.begin(),nums.begin()+mid);
        vector<int> right(nums.begin()+mid+1,nums.end());

        root->left = sortedArrayToBST(left);
        root->right = sortedArrayToBST(right);

        return root;
    }
};

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int mid = arr.size()/2;
    vector<int> left(arr.begin(),arr.begin()+mid);
    vector<int> right(arr.begin()+mid + 1,arr.end());

    for(int i = 0;i<left.size();i++){
        cout<<left[i] << endl;
    }

    for(int i = 0;i<right.size();i++){
        cout<<right[i] << endl;
    }
    return 0;
}