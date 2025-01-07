#include <iostream>
using namespace std;

struct ListNode {
	ListNode(int x) : val(x), next(NULL) {};
	ListNode(int x,ListNode *p) : val(x), next(p) {};
	int val;
	ListNode *next;
	
};
 ListNode* reverseList(ListNode* head,int n){
        if(n == 1) return head;
        ListNode *tail = head->next, *p = reverseList(head->next, n - 1);
        head->next = tail->next;
        tail->next = head;
        return p;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int n = right - left + 1;
       
        ListNode *ret = new ListNode(0,head); 
        ListNode *q = ret;
        int m = left;
        while(m >= 2){
            q = q->next;
            m--;
        }
        // if(left != 1) q->next = reverseList(q->next,n);
        // else head = reverseList(head,n);
        q->next = reverseList(q->next,n);

        return ret->next;
    }
int main(){
	ListNode *head = NULL,*newHead;
	head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);

	newHead = reverseBetween(head,2,3);
	while(newHead){
		cout << newHead->val << "->" ;
		newHead = newHead->next;
	}
	return 0;
} 
