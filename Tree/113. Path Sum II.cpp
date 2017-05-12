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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(!root) return vector<vector<int>> ();
        vector<vector<int>> res;
        vector<int> path;
        dfs(root, root->val, sum,res,path);
        return res;
    }

    void dfs(TreeNode *root, int cur_sum, int sum, vector<vector<int>> &res,vector<int> path){
        if(!root)
            return;
        path.push_back(root->val);
        //cur_sum += root->val;
        //cout << cur_sum <<endl;
        if(!root->left && !root->right && cur_sum == sum){
            res.push_back(path);
            return;
        }
        if(root->left)  {
            dfs(root->left,cur_sum+root->left->val, sum,res, path);
        }
        if(root->right){
            dfs(root->right,cur_sum+root->right->val, sum,res,path);
        }

    }
};
