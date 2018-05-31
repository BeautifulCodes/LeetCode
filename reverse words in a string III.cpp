class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string temp="";
        string finalstring="";
        vector<string>v_string;
        while(iss>>temp){
            reverse(temp.begin(),temp.end());
            v_string.push_back(temp);
        }
        for(int i=0;i<v_string.size();i++){
            finalstring+=v_string[i];
            if(i!=v_string.size()-1){
                finalstring+=" ";
            }
        }
        return finalstring;
    }
};