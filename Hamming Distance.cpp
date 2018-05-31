class Solution {
public:
    int hammingDistance(int x, int y) {
        int dis=x^y,cnt=0;
        for(int i=0;i<32;i++){
            if(int((dis & (1<<i)))){
                cnt+=int((dis & (1<<i)) >=1 );
            }
        }
        return cnt;
    }
};