class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>included;
        int i=0,j=0;
        vector<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<nums1.size() and j<nums2.size()){
            if(nums1[i]==nums2[j]){
                if(!included[nums1[i]]){
                    ans.push_back(nums1[i]);
                    included[nums1[i]]=true;
                }
                i++,j++;
            }else if(nums1[i] < nums2[j]){
                i++;
            }else{
                j++;
            }
        }
        return ans;
    }
};