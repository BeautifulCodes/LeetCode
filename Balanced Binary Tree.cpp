/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int height(struct TreeNode* r){
    if(!r)return 0;
    return (1+max(height(r->left),height(r->right)));
}
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        return ((abs(height(root->left)-height(root->right))<=1) and isBalanced(root->left) and isBalanced(root->right));
    }
};