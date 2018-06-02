/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void findpath(struct TreeNode* r,vector<vector<int>>&store,vector<int>path){
    if(!r)return;
    if(!r->left and !r->right){
        path.push_back(r->val);
        store.push_back(path);
        return;
    }
    path.push_back(r->val);
    findpath(r->left,store,path);
    findpath(r->right,store,path);
}

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int>path;
        vector<vector<int>>All;
        findpath(root,All,path);
        vector<string>ans;
        for(int i=0;i<All.size();i++){
            string keep="";
            for(int j=0;j<All[i].size();j++){
                if(j==0){
                    keep+=to_string(All[i][j]);
                }else{
                    if(j<path.size()-1){
                        keep+="->"+to_string(All[i][j]);
                    }else{
                        keep+=to_string(All[i][j]);
                    }
                }
            }
            ans.push_back(keep);
        } 
        return ans;
    }
};