/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        struct ListNode* lesshead=NULL,*less=NULL,*morehead=NULL,*more=NULL,*go=NULL;
        if(!head)return NULL;
        go=head;
        while(go){
            if(go->val < x){
                if(!lesshead){
                    lesshead=go;
                    less=lesshead;
                }else{
                    less->next=go;
                    less=go;
                }
            }else{
                if(!morehead){
                    morehead=go;
                    more=morehead;
                }else{
                    more->next=go;
                    more=go;
                }
            }
            go=go->next;
        }
        if(!morehead){
            less->next=NULL;
            return lesshead;
        }else if(!lesshead){
            return morehead;
        }else{
            less->next=morehead;
            more->next=NULL;
            return lesshead;
        }
    }
};