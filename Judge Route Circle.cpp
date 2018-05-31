class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(int i=0;i<moves.length();i++){
            x+=((moves[i]=='U')?1:moves[i]=='D'?-1:0);
            y+=((moves[i]=='R')?1:moves[i]=='L'?-1:0);
        }
        return ((!x) and (!y));
    }
    
};