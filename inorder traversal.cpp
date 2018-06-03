/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inorder(struct TreeNode* r,vector<int>&ans){
    if(!r)return;
    inorder(r->left,ans);
    ans.push_back(r->val);
    inorder(r->right,ans);
}

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
      vector<int>ans;
      inorder(root,ans);
      return ans;
    }
};