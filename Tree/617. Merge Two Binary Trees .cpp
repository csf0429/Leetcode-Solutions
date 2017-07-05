//
// Created by 蔡少凡 on 5/21/17.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1)  return t2;
        if(!t2)  return t1;

        TreeNode *node = new TreeNode(t1->val + t2->val);
        node->left = mergeTrees(t1->left, t2->left);
        node->right = mergeTrees(t1->right, t2->right);
        return node;

    }
};
