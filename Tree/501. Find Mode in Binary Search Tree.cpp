//
// Created by 蔡少凡 on 5/20/17.
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
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> map;
        vector<int> result;
        int modeCount = getModeCount(root, map);

        for(pair<int,int> p : map){
            if(p.second == modeCount){
                result.push_back(p.first);
            }
        }

        return result;
    }

    int getModeCount(TreeNode *node, unordered_map<int, int> &map){
        if(node == NULL) return 0;

        if(map.find(node->val) == map.end()){
            map.insert(pair<int,int> (node->val,1));
        } else{
            map[node->val]++;
        }
        return max(map[node->val],max(getModeCount(node->left,map),getModeCount(node->right,map)));
    }
};