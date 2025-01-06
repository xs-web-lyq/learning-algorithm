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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode *q = head,*p = head->next;
        while(q != p && p && p->next){
            q = q->next;
            p = p->next->next;
        }
        if(!(p && p->next)){
            return NULL;
        }
        p = head->next;
        q = head->next->next;
        while(p != q){
            p = p->next;
            q = q->next->next;
        }
        p = head;
        while(p != q){
            q = q->next;
            p = p->next;
        }
        return q;

    }
};
