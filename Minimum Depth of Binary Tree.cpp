/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void find_depth(struct TreeNode* r,int curr,int &d){
    if(!r)return;
    if(!r->left and !r->right){
        d=min(d,curr);
        return ;
    }
    find_depth(r->left,curr+1,d);
    find_depth(r->right,curr+1,d);
}

class Solution {
public:
    int minDepth(TreeNode* root) {
        int min_d=INT_MAX,curr=0;
        find_depth(root,curr,min_d);
        return min_d+1;
    }
};