#include <iostream>

struct Node{
	Node(int data) : data(data), next(NULL){}; // ¹¹Ôìº¯Êý 
	int data;
	Node *next;
};

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool hasCycle(Node *head) {
    if(!head) return false;
    Node *q, *p;
    q = p = head;
    while(p && p->next){
        if(q == p){
            return true;
        }
        q = q->next;
        p = p->next->next;
    }
    return false;
}
int main(int argc, char** argv) {
	Node *head = NULL;
	head = new Node(1);
	head->next = new Node(2);
//	head->next->next = new Node(3);
//	head->next->next->next = new Node(4);
//	while(head!=NULL){
//		cout << head->data << "->";
//		head = head->next;
//	}
	
	bool flag;
	flag = hasCycle(head);
	cout << flag;
	return 0;
}


//int data[10];
//int next[10];
//
//void add(int index, int p, int v){
//	next[p] = next[index];
//	next[index] = p;
//	data[p] = v;
//	return ;
//} 



//int main(){
//	int head = 3;
//	data[3] = 0;
//	add(3,5,1);
//	add(5,1,3);
//	add(1,7,44);
//	add(7,9,000);
//	add(9,2,2);
//	
//	int p = head;
//	while(p!=0){
//		cout << data[p] << "->";
//		p = next[p];
//	}
//	return 0;
//}




