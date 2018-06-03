class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,bool>m;
        int n=nums.size();
        for(int i=0;i<n;i++)m[nums[i]]=true;
        for(int i=0;i<=n;i++)if(!m[i])return i;
        return -1;
    }
};