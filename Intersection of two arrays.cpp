class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        map<int,int>included;
        if(nums1.empty() or nums2.empty())return ans;
        sort(nums1.begin(),nums1.end());
        for(int i=0;i<nums2.size();i++){
            if(!included[nums2[i]] && binary_search(nums1.begin(),nums1.end(),nums2[i])){
                ans.push_back(nums2[i]);
                included[nums2[i]]=true;
            }
        }
        return ans;
    }
};