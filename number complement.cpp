class Solution {
public:
    int findComplement(int num) {
        int ans=0,cnt=0;
        while(num){
            if(!(num&1)){
                ans=ans+(1<<cnt);
            }
            cnt++;
            num>>=1;
        }
        return ans;
    }
};