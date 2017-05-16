//
// Created by 蔡少凡 on 5/14/17.
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
    int sum = 0;
    int findTilt(TreeNode* root) {
        if(!root) return 0;

        int res = 0;
        postOrder(root,res);
        return res;
    }

    int postOrder(TreeNode *root, int &res){
        if(!root) return 0;

        int leftsum = postOrder(root->left, res);
        int rightsum = postOrder(root->right,res);
        res += abs(leftsum - rightsum);
        return  leftsum + rightsum + root->val;
    }

};