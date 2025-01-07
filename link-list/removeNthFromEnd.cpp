#include <iostream>
using namespace std;

struct ListNode {
	ListNode(int x) : val(x), next(NULL) {};
	ListNode(int x,ListNode *p) : val(x), next(p) {};
	int val;
	ListNode *next;
	
};





 ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ret = new ListNode(0,head);
        ListNode *q = ret;
        ListNode *p = ret;
        while(n--) p = p->next;
        while(p->next){
            q = q->next;
            p = p->next;        
        } 
        q->next = q->next->next;
        return ret->next;
    }
    
int main(){
	ListNode *head = NULL,*newHead;
	head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);

	newHead = removeNthFromEnd(head,2);
	while(newHead){
		cout << newHead->val << "->" ;
		newHead = newHead->next;
	}
	return 0;
} 
