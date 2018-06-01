class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_sum=0,curr=0;
        for(int i=0;i<=nums.size();i++){
            if((i==nums.size()) or nums[i]==0){
                max_sum=max(max_sum,curr);
                curr=0;
            }
            else{
                curr++;
            }
        }
        return max_sum;
    }
};