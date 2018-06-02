bool _is_self_dividing(int num,int rem){
    if(rem%10==0)return false;
    if(rem<10){
        return ((num%rem)==0);
    }
    return (((num % (rem%10))==0)& _is_self_dividing(num,rem/10));
}

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(_is_self_dividing(i,i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};