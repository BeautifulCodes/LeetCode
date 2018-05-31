class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int>positions;
        for(int i=0;i<S.length();i++){
            if(S[i]==C){
                positions.push_back(i);
            }
        }
        vector<int>ans;
        for(int i=0;i<S.length();i++){
            int min_pos=INT_MAX;
            for(int j=0;j<positions.size();j++){
                min_pos=min(min_pos,abs(i-positions[j]));
            }
            ans.push_back(min_pos);
        }
        return ans;
    }
};