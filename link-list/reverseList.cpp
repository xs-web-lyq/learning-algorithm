#include <iostream>
using namespace std;

struct LinkNode {
	LinkNode(int x) : val(x), next(NULL) {};
	int val;
	LinkNode *next;
	
};
// 双指针法 
LinkNode* reverseList(LinkNode* head) {
        LinkNode *q = NULL;
        LinkNode *p = head, *pre;
        while(p){
            pre = p->next;
            p->next = q;
            q = p;
            p = pre;
        }
        return q;
    }
//    递归反转 
LinkNode* reverseList1(LinkNode* head) {
       if(head == NULL || head->next== NULL) return head;
       LinkNode *tail = head->next, *p = reverseList1(head->next);
       head->next = tail->next;
       tail->next = head;
       return p;
    }

// 反转前n个节点
 LinkNode* reverseList2(LinkNode* head,int n) {
       if(n == 1) return head;
       LinkNode *tail = head->next, *p = reverseList2(head->next, n - 1);
       head->next = tail->next;
       tail->next = head;
       return p;
    }
int main(){
	LinkNode *head = NULL,*newHead;
	head = new LinkNode(1);
	head->next = new LinkNode(2);
	head->next->next = new LinkNode(3);
//	newHead = reverseList(head);
	newHead = reverseList2(head,2);
	while(newHead){
		cout << newHead->val << "->" ;
		newHead = newHead->next;
	}
	return 0;
} 
