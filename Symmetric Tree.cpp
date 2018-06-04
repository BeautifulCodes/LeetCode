/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool if_symmetric(struct TreeNode* l,struct TreeNode* r){
    if(!l and !r)return true;
    if((l and !r) or (!l and r))return false;
    return ((l->val==r->val) and if_symmetric(l->left,r->right) and if_symmetric(l->right,r->left));
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        return if_symmetric(root,root);
    }
};