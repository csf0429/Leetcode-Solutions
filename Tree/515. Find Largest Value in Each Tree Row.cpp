//
// Created by 蔡少凡 on 5/13/17.
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
    vector<int> res;

    void dfs(TreeNode *node, int depth){
        if(!node) return;
        if(res.size() < depth+1){
            res.push_back(node->val);
        }else{
            if(res[depth] < node->val){
                res[depth] = node->val;
            }
        }

        dfs(node->left, depth+1);
        dfs(node->right,depth + 1);
    }

    vector<int> largestValues(TreeNode* root) {
        if(!root) return res;
        dfs(root,0);
        return res;
    }
};

