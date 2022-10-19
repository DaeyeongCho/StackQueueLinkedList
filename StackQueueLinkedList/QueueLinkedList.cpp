#include "QueueLinkedList.h"

QueueLinkedList::QueueLinkedList() {
	corsor = NULL;
}

QueueLinkedList::~QueueLinkedList() {
	for (int i = 0; i < n; i++) {
		pop();
	}
}

void QueueLinkedList::push(string e) {
	Node* v = new Node;
	v->name = e;
	if (corsor == NULL) {
		corsor = v;
		v->next = corsor;
	}
	else {
		v->next = corsor->next;
		corsor->next = v;
		corsor = v;
	}
	n++;
}

void QueueLinkedList::pop() {
	Node* v = corsor->next;
	if (corsor == v) {
		corsor = NULL;
	}
	else {
		corsor->next = v->next;
	}
	delete v;
	n--;
}

string QueueLinkedList::front() {
	return corsor->next->name;
}

int QueueLinkedList::size() {
	return n;
}

bool QueueLinkedList::empty() {
	if (corsor == NULL) {
		return true;
	} else {
		return false;
	}
}