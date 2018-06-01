class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        string save;
        for(int i=1;i<=n;i++){
            if((i%3==0) and (i%5==0)){
                save="FizzBuzz";
            }else if(i%5==0){
                save="Buzz";
            }else if(i%3==0){
                save="Fizz";
            }else{
                save=to_string(i);
            }
            ans.push_back(save);
        }
        return ans;
    }
};