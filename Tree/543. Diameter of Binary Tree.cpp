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
    int maxdiadepth = 0;

    int dfs(TreeNode *root){
        if(root == NULL) return 0;

        int leftdepth = dfs(root->left);
        int rightdepth = dfs(root->right);

        if(maxdiadepth < leftdepth + rightdepth) maxdiadepth = leftdepth + rightdepth;
        return max(leftdepth,rightdepth)+1;
    }

    int diameterOfBinaryTree(TreeNode *root){
        dfs(root);
        return maxdiadepth;
    }
};
