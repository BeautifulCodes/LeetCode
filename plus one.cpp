
struct node{
    int val;
    struct node* next;
    node(int x){
        val=x;
        next=NULL;
    }
};

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        struct node* root=NULL,*prev=NULL;
        for(int i=digits.size()-1;i>=0;i--){
            if(!root){
                root=new node(digits[i]);
                prev=root;
            }else{
                struct node* temp= new node(digits[i]);
                prev->next=temp;
                prev=temp;
            }
        }
        root->val=root->val+1;
        struct node* go=root;
        int carry=0;
        while(go){
            int x=(go->val+carry);
            go->val=(x)%10;
            carry=x/10;
            if(!go->next){
                if(carry){
                    while(carry){
                        struct node* temp=new node(carry%10);
                        carry/=10;
                        go->next=temp;
                        go=temp;
                    }
                }
                go=go->next;
            }else{
                go=go->next;
            }
        }
        vector<int>ans;
        go=root;
        while(go){
            ans.push_back(go->val);
            go=go->next;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};