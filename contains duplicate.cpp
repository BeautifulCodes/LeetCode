class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,bool>Hash;
        for(int i=0;i<nums.size();i++){
            if(Hash[nums[i]])return true;
            Hash[nums[i]]=true;
        }
        return false;
    }
};