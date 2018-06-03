/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int maxheight(struct TreeNode* r){
    if(!r)return 0;
    return 1+max(maxheight(r->left),maxheight(r->right));
}
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        return max(maxheight(root->left)+maxheight(root->right),max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
    }
};