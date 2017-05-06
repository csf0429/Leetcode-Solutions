//
// Created by 蔡少凡 on 4/21/17.
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
    int mindepth = 99999;
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        dfs(root,1);
        return mindepth;
    }

    void dfs(TreeNode *root,int cur_depth){
        if(root == NULL) {
            return;
        }
        if( cur_depth < mindepth && root->left == NULL && root->right==NULL) {
            mindepth = cur_depth;
        }
        if(mindepth < cur_depth)
            return;
        dfs(root->left,cur_depth+1);
        dfs(root->right,cur_depth+1);
    }
};