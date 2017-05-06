//
// Created by 蔡少凡 on 4/20/17.
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
    int maxdepth = 0;
    int maxDepth(TreeNode* root) {
        dfs(root,1);
        return maxdepth;
    }

    void dfs(TreeNode *root,int cur_depth){
        if(root == NULL) return;
        if(maxdepth < cur_depth) maxdepth = cur_depth;
        dfs(root->left,cur_depth+1);
        dfs(root->right,cur_depth+1);

    }
};