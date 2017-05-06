//
// Created by 蔡少凡 on 5/6/17.
//
#include <iostream>
#include <vector>
#include <queue>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        move(root, 1, res);
        return res;

    }

    void move(TreeNode *root, int level, vector<int> &res){
        if(!root)
            return;
        if(res.size()< level)
            res.push_back(root->val);
        move(root->right, level+1, res);
        move(root->left, level+1, res);

    }
};