#include "StackLinkedList.h"

StackLinkedList::StackLinkedList() {
	head = NULL;
}

StackLinkedList::~StackLinkedList() {
	for (int i = 0; i < n; i++) {
		pop();
	}
}

void StackLinkedList::push(string e) {
	Node* v = new Node;
	v->name = e;
	v->next = head;
	head = v;
	n++;
}

string StackLinkedList::top() {
	return head->name;
}

void StackLinkedList::pop() {
	Node* v = head;
	head = head->next;
	delete v;
	n--;
}

int StackLinkedList::size() {
	return n;
}

bool StackLinkedList::empty() {
	if (head == NULL) {
		return true;
	}
	else {
		return false;
	}
}