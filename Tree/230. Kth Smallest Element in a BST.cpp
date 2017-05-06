//
// Created by 蔡少凡 on 4/30/17.
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

//class Solution {
//public:
//    int kthSmallest(TreeNode* root, int k) {
//        stack <TreeNode*> s;
//        TreeNode *p = root;
//
//        while(p||!s.empty()){
//            while(p){
//                s.push(p);
//                p = p->left;
//            }
//            p = s.top();
//            if( --k == 0){
//                return p->val;
//            }
//            s.pop();
//            p = p->right;
//        }
//
//    }
//};

class Solution{
public:
    void inOrder(TreeNode *node, int &count, int& k, int& value){
        if(node == NULL){
            return;
        }

        inOrder(node->left,count,k,value);
        count++;
        if(count == k) {
            value = node->val;
        }
        inOrder(node->right, count, k, value);
    }

    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int value = 0;
        inOrder(root, count, k, value);
        return value;
    }
};