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
    bool isBalanced(TreeNode* root) {
        return dfsheight(root) != -1;
    }

    int dfsheight(TreeNode* root){
        if(root == NULL) return 0;
        int leftheight = dfsheight(root->left);
        if(leftheight == -1) return -1;
        int rightheight = dfsheight(root->right);
        if(rightheight == -1) return -1;

        if(abs(leftheight-rightheight)>1)
            return -1;
        return max(leftheight,rightheight)+1;
    }
};
