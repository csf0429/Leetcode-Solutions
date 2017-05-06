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


    vector<TreeNode*> generateTrees(int n) {
        vector <TreeNode*> temp;
        if(n == 0)
            return temp;
        return generateTree(1,n);
    }

    vector<TreeNode*> generateTree(int begin, int end){
        vector <TreeNode*> res;
        if(begin > end) res.push_back(NULL);
        if(begin == end) res.push_back(new TreeNode(begin));
        if(begin < end){
            for(int i = begin; i <= end; i++){
                vector <TreeNode*> left  = generateTree(i,i-1);
                vector <TreeNode*> right = generateTree(i+1,end);

                for(int l=0; l < left.size(); l++)
                    for(int r=0; r<right.size(); r++){
                        TreeNode *m = new TreeNode(i);
                        m->left = left[l];
                        m->right = right[r];
                        res.push_back(m);
                    }

            }
            return res;
        }
    }
};