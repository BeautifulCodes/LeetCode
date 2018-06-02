class Solution {
public:
    char findTheDifference(string s, string t) {
        int xr=0;
        s+=t;
        for(int i=0;i<s.length();i++){
            xr^=(s[i]-'a');
        }
        return (char(xr+'a'));
    }
};	