#ifndef STACK_LINKED_LIST
#define STACK_LINKED_LIST

#include "Node.h"

class StackLinkedList {
private :
	Node* head;
	int n = 0;
public :
	StackLinkedList();
	~StackLinkedList();
	void push(string e);
	string top();
	void pop();
	int size();
	bool empty();
};

#endif