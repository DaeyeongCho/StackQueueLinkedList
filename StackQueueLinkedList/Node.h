#ifndef NODE
#define NODE

#include <string>

using namespace std;

class Node {
private :
	string name;
	Node* next;
public :
	friend class StackLinkedList;
	friend class QueueLinkedList;
};

#endif