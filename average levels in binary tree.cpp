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
    vector<double> averageOfLevels(TreeNode* root) {
       vector<double>ans;
       if(!root){
           return ans;
       }
       queue<struct TreeNode*>Q;
       Q.push(root);
       Q.push(NULL);
       double calc=0.0;
       int sz=0;
       while(not Q.empty()){
           struct TreeNode* T=Q.front();
           Q.pop();
           if(!T){
               if(! Q.empty()){
                   Q.push(NULL);
                   ans.push_back((calc*1.0)/sz);
               }else{
                   ans.push_back((calc*1.0)/sz);
               }
               calc=sz=0.0;       
           }else{
               if(T->left)Q.push(T->left);
               if(T->right)Q.push(T->right);
               calc+=(T->val);
               sz++;
           }
       }
       return ans;
    }
};