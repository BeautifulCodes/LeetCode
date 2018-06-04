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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA or !headB)return NULL;
        if((!headA and headB) or (!headB and headA))return NULL;
        if(headA->val == headB->val)return headA;
        if(headA->val < headB->val){
            headA=headA->next;
        }else{
            headB=headB->next;
        }
        return getIntersectionNode(headA,headB);
    }
};