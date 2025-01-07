   #include <iostream>
using namespace std;

struct ListNode {
	ListNode(int x) : val(x), next(NULL) {};
	ListNode(int x,ListNode *p) : val(x), next(p) {};
	int val;
	ListNode *next;
	
};
	
	ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        int n = 1;
        ListNode *q = head;
        while(q->next){
            n++;
            q = q->next;
        }
//        cout << n;
        q->next = head;

        int cnt = n - k%n;
        q = head;
        while(--cnt){
            q = q->next;
        }
        head = q->next;
        q->next = NULL;
        return head;
    }
    
    
int main(){
	ListNode *head = NULL,*newHead;
	head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);

	newHead = rotateRight(head,2);
	while(newHead){
		cout << newHead->val << "->" ;
		newHead = newHead->next;
	}
	return 0;
} 
