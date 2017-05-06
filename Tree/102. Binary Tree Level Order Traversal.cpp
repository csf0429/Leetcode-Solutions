//
// Created by 蔡少凡 on 5/6/17.
//

#include <iostream>
#include <queue>
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL)
            return vector<vector<int>> ();
        queue<TreeNode*> queue;
        vector<int> cur_level;
        queue.push(root);
        queue.push(NULL);   //mark null as a marker
        int level = 1;
        while(!queue.empty()){
            TreeNode *node = queue.front();
            queue.pop();

            if(node == NULL){
                result.push_back(cur_level);
                cur_level.resize(0);
                if(queue.size()>0){
                    queue.push(NULL);
                }

            }else{
                cur_level.push_back(node->val);
                if(node->left) queue.push(node->left);
                if(node->right) queue.push(node->right);
            }



        }
        return result;
    }
};