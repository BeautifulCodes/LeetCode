/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */



class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> >ans;
        if(!root)return ans;
        queue<struct TreeNode* > Q;
        Q.push(root);
        Q.push(NULL);
        vector<int>aux;
        while(not Q.empty()){
            struct TreeNode* t=Q.front();
            Q.pop();
            if(!t){
                if(!Q.empty()){
                    Q.push(NULL);
                }
                ans.push_back(aux);
                aux.clear();
            }else{
                if(t->left)Q.push(t->left);
                if(t->right)Q.push(t->right);
                aux.push_back(t->val);
            }
        }
        return ans;
    }
};