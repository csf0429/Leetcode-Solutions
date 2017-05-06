//
// Created by 蔡少凡 on 4/19/17.
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

class Solution{
public:
    TreeNode* invertTree(TreeNode *root){
        dfs(root);
        return root;
    }

    void dfs(TreeNode *root){
        if(root == NULL) return;

        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;

        dfs(root->left);
        dfs(root->right);
    }
};

