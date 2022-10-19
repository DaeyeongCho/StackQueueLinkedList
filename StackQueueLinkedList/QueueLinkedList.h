#ifndef QUEUE_LINKED_LIST
#define QUEUE_LINKED_LIST

#include "Node.h"

class QueueLinkedList {
private :
	Node* corsor;
	int n = 0;
public :
	QueueLinkedList();
	~QueueLinkedList();
	void push(string e);
	void pop();
	string front();
	int size();
	bool empty();
};

#endif