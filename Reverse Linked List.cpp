/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

void reverse(struct ListNode* go,struct ListNode* prev,struct ListNode*&head){
    if(!go->next){
        head=go;
        go->next=prev;
        return;
    }
    reverse(go->next,go,head);
    go->next=prev;
}

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)return NULL;
        reverse(head,NULL,head);
        return head;
    }
};