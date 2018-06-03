/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void sumOfLeaves(struct TreeNode* root,int l,int& sum){
    if(!root)return;
    if(!root->left and !root->right){
        if(l)sum+=(root->val);
        return;
    }
    sumOfLeaves(root->left,1,sum);
    sumOfLeaves(root->right,0,sum);
}
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)return 0;
        int sum=0;
        sumOfLeaves(root,0,sum);
        return sum;
    }
};