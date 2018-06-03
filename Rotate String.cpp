class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.empty() and B.empty())return true;
        if((A.empty() and !B.empty()) or (!A.empty() and B.empty()))return false;
        int sz=A.size();
        for(int i=0;i<sz+1;i++){
            char x=A.front();
            A.erase(A.begin(),A.begin()+1);
            A+=(x);
            if(A==B)return true;
        }
        return false;
    }
};