//
// Created by 蔡少凡 on 5/1/17.
//

#include <iostream>
#include <queue>

using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution{
public:
    vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
        if(root == NULL)
            return vector<vector<int>> ();

        vector<vector<int>> res;

        queue<TreeNode*> queue;
        queue.push(root);
        bool lefttoright = true;

        while(!queue.empty()){
            int size = queue.size();

            vector<int> row;

            for(int i=0;i<size;i++){
                TreeNode *node = queue.front();
                queue.pop();
                int index = lefttoright?i:size-1-i;
                row[index] = node->val;
                if(node->left)
                    queue.push(node->left);
                if(node->right)
                    queue.push(node->right);
            }
            lefttoright = !lefttoright;
            res.push_back(row);
        }
        return res;
     }
};