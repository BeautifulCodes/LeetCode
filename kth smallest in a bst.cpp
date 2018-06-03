/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inorder(struct TreeNode* root,vector<int>&ans){
    if(!root)return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        inorder(root,ans);
        return ans[k-1];
        
    }
};