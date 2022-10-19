#include <iostream>

#include "Node.h"
#include "StackLinkedList.h"
#include "QueueLinkedList.h"

using namespace std;

int main() {
	int select;
	string name;

	cout << "����(1) ť(2) ����(3): ";
	cin >> select;

	switch(select) {
	case 1: 
	{
		StackLinkedList stackLL;
		cout << "**********//���� ���//**********";
		while (true) {
			cout << "\nǪ��(1) ��(2) ž(3) ������(4) ����Ƽ(5) ����(6): ";
			cin >> select;

			if (select == 6) {
				stackLL.~StackLinkedList();
				break;
			}

			switch (select) {
			case 1:
				cout << "�̸� �Է�: ";
				cin >> name;
				stackLL.push(name);
				break;
			case 2:
				if (stackLL.empty() == false) {
					stackLL.pop();
					cout << "��" << endl;
				}
				else {
					cout << "����!! ������ ����־� �� �Ұ�" << endl;
				}
				break;
			case 3:
				if (stackLL.empty() == false) {
					cout << stackLL.top() << endl;
				}
				else {
					cout << "����!! ������ ����־� ž �Ұ�" << endl;
				}
				break;
			case 4:
				cout << stackLL.size() << endl;
				break;
			case 5:
				cout << stackLL.empty() << endl;
				break;
			default:
				cout << "����!! �߸��� �Է�" << endl;
				cin.clear();
				cin.ignore(100, '\n');
				break;
			}
		}
		break;
	}
	case 2:
	{
		QueueLinkedList queueLL;
		cout << "**********//ť ���//**********";
		while (true) {
			cout << "\nǪ��(1) ��(2) ����Ʈ(3) ������(4) ����Ƽ(5) ����(6): ";
			cin >> select;

			if (select == 6) {
				break;
			}

			switch (select) {
			case 1:
				cout << "�̸� �Է�: ";
				cin >> name;
				queueLL.push(name);
				break;
			case 2:
				if (queueLL.empty() == false) {
					queueLL.pop();
					cout << "��" << endl;
				}
				else {
					cout << "����!! ť�� ����־� �� �Ұ�" << endl;
				}
				break;
			case 3:
				if (queueLL.empty() == false) {
					cout << queueLL.front() << endl;
				}
				else {
					cout << "����!! ť�� ����־� ����Ʈ �Ұ�" << endl;
				}
				break;
			case 4:
				cout << queueLL.size() << endl;
				break;
			case 5:
				cout << queueLL.empty() << endl;
				break;
			default:
				cout << "����!! �߸��� �Է�" << endl;
				cin.clear();
				cin.ignore(100, '\n');
				break;
			}
		}
		break;
	}
	case 3:
		cout << "���α׷� ����\n";
		break;
	default:
		cout << "�߸��� �Է�. ���α׷� ����\n";
		cin.clear();
		cin.ignore(100, '\n');
		break;
	}
	return 0;
}