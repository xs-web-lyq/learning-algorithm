#include <iostream>

struct Node{
	Node(int data) : data(data), next(NULL){}; // ¹¹Ôìº¯Êý 
	int data;
	Node *next;
};
//    bool hasCycle(Node *head) {
//        if(!head) return false;
//        Node *q, *p;
//        q = p = head;
//        while(p && p->next){
//            if(q == p){
//                return true;
//            }
//            q = q->next;
//            p = p->next->next;
//        }
//        return false;
//    }

