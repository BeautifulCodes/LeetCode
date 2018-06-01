
int total_set_bits(int x){
    int cnt=0;
    while(x){
        x=x&(x-1);
        cnt++;
    }
    return cnt;
}

class Solution {
public:
    int countPrimeSetBits(int l, int r) {
        int cnt=0;
        map<int,int>m;
        m[2]=m[3]=m[5]=m[7]=m[11]=m[13]=m[17]=m[19]=m[23]=m[29]=m[31]=m[37]=1;
        for(int i=l;i<=r;i++){
            int x=total_set_bits(i);
            if(m[x]){
                cnt++;
            }
        }
        return cnt;
    }
};