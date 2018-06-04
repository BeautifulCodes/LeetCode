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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        struct ListNode* head=NULL,*prev=head;
        if(!l1 and !l2)return NULL;
        if(!l1)return l2;
        if(!l2)return l1;
        while(l1 and l2){
            if(!head){
                if(l1->val < l2->val){
                    head=l1;
                    l1=l1->next;
                }else{
                    head=l2;
                    l2=l2->next;
                }
                prev=head;
            }
            else{
                if(l1->val < l2->val){
                    prev->next=l1;
                    prev=l1;
                    l1=l1->next;
                }else{
                    prev->next=l2;
                    prev=l2;
                    l2=l2->next;
                }
            }
        }
        if(l1){
            prev->next=l1;
        }else if(l2){
            prev->next=l2;
        }else{
            prev->next=NULL;
        }
        return head;
    }
};