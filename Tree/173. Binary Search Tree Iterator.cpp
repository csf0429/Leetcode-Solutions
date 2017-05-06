//
// Created by 蔡少凡 on 5/6/17.
//

#include <iostream>
#include <stack>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BSTIterator {
    stack<TreeNode *> myStack;
public:
    BSTIterator(TreeNode *root) {
        pushAll(root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !myStack.empty();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode *tmp = myStack.top();
        myStack.pop();
        pushAll(tmp->right);
        return tmp->val;
    }

private:
    void pushAll(TreeNode *node){
        for(; node !=NULL; node = node->left)
            myStack.push(node);
    }
};