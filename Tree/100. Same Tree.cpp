//
// Created by 蔡少凡 on 4/27/17.
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL)
            return p == q;
        return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, p->right));
    }

};