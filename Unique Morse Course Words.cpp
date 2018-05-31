class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string>SET;
        string rep[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i=0;i<words.size();i++){
            string str="";
            for(int j=0;j<words[i].length();j++){
                str+=rep[words[i][j]-'a'];
            }
            SET.insert(str);
        }
        return SET.size();
    }
};