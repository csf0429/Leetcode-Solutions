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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s && !t) return true;
        if(!t || !s) return false;
        if(isSame(s,t) || isSubtree(s->left,t) || isSubtree(s->right,t)) return true;
        return false;
    }

    bool isSame(TreeNode* s, TreeNode *t)
    {
        if(!s && !t) return true;
        if(s->val != t->val || !s || !t) return false;
        return isSame(s->left,t->left) && isSame(s->right,t->right);

    }
};

