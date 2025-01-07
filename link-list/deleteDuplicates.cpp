#include <iostream>
using namespace std;

struct ListNode {
	ListNode(int x) : val(x), next(NULL) {};
	ListNode(int x,ListNode *p) : val(x), next(p) {};
	int val;
	ListNode *next;
	
};






ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *q = head , *p = head->next;
        while(p){
            if(p->val == q->val){
                q->next = p->next;
                p = p->next;
            }else{
                p = p->next;
                q = q->next;
            }
        }
        return head;

    }
    
    
int main(){
	ListNode *head = NULL,*newHead;
	head = new ListNode(2);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);

	newHead = deleteDuplicates(head);
	while(newHead){
		cout << newHead->val << "->" ;
		newHead = newHead->next;
	}
	return 0;
} 
