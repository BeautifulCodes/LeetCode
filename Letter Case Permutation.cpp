void dfs(string s,string original,vector<string>&ans,int curr,int l){
    if(curr==l){
        ans.push_back(s);
        return;
    }
    if(original[curr]>='a' and original[curr]<='z'){
        s+=original[curr];
        dfs(s,original,ans,curr+1,l);
        s.pop_back();
        s+=((char)((original[curr]-'a')+'A'));
        dfs(s,original,ans,curr+1,l);
    }else if(original[curr]>='A' and original[curr]<='Z'){
        s+=original[curr];
        dfs(s,original,ans,curr+1,l);
        s.pop_back();
        s+=((char)((original[curr]-'A')+'a'));
        dfs(s,original,ans,curr+1,l);
    }
    else if(original[curr]>='0' and original[curr]<='9'){
        s+=original[curr];
        dfs(s,original,ans,curr+1,l);
    }
}
class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string>ans;
        int l=S.length();
        int curr=0;
        string start="";
        dfs(start,S,ans,curr,l);
        return ans;
    }
};