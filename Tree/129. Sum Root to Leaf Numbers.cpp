//
// Created by 蔡少凡 on 5/11/17.
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
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        dfs(root, root->val);
        return sum;
    }

    void dfs(TreeNode *node, int cur_sum){
        if(!node) return;
        if(node->left) dfs(node->left, 10* cur_sum + node->left->val);
        if(node->right) dfs(node->right, 10 * cur_sum + node->right->val);
        if(!node->left && !node->right) sum += cur_sum;
    }

private:
    int sum;
};