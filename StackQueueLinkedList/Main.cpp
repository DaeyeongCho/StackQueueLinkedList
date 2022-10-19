#include <iostream>

#include "Node.h"
#include "StackLinkedList.h"
#include "QueueLinkedList.h"

using namespace std;

int main() {
	int select;
	string name;

	cout << "스택(1) 큐(2) 종료(3): ";
	cin >> select;

	switch(select) {
	case 1: 
	{
		StackLinkedList stackLL;
		cout << "**********//스택 모드//**********";
		while (true) {
			cout << "\n푸쉬(1) 팝(2) 탑(3) 사이즈(4) 엠프티(5) 종료(6): ";
			cin >> select;

			if (select == 6) {
				stackLL.~StackLinkedList();
				break;
			}

			switch (select) {
			case 1:
				cout << "이름 입력: ";
				cin >> name;
				stackLL.push(name);
				break;
			case 2:
				if (stackLL.empty() == false) {
					stackLL.pop();
					cout << "팝" << endl;
				}
				else {
					cout << "오류!! 스택이 비어있어 팝 불가" << endl;
				}
				break;
			case 3:
				if (stackLL.empty() == false) {
					cout << stackLL.top() << endl;
				}
				else {
					cout << "오류!! 스택이 비어있어 탑 불가" << endl;
				}
				break;
			case 4:
				cout << stackLL.size() << endl;
				break;
			case 5:
				cout << stackLL.empty() << endl;
				break;
			default:
				cout << "오류!! 잘못된 입력" << endl;
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
		cout << "**********//큐 모드//**********";
		while (true) {
			cout << "\n푸쉬(1) 팝(2) 프론트(3) 사이즈(4) 엠프티(5) 종료(6): ";
			cin >> select;

			if (select == 6) {
				break;
			}

			switch (select) {
			case 1:
				cout << "이름 입력: ";
				cin >> name;
				queueLL.push(name);
				break;
			case 2:
				if (queueLL.empty() == false) {
					queueLL.pop();
					cout << "팝" << endl;
				}
				else {
					cout << "오류!! 큐가 비어있어 팝 불가" << endl;
				}
				break;
			case 3:
				if (queueLL.empty() == false) {
					cout << queueLL.front() << endl;
				}
				else {
					cout << "오류!! 큐가 비어있어 프론트 불가" << endl;
				}
				break;
			case 4:
				cout << queueLL.size() << endl;
				break;
			case 5:
				cout << queueLL.empty() << endl;
				break;
			default:
				cout << "오류!! 잘못된 입력" << endl;
				cin.clear();
				cin.ignore(100, '\n');
				break;
			}
		}
		break;
	}
	case 3:
		cout << "프로그램 종료\n";
		break;
	default:
		cout << "잘못된 입력. 프로그램 종료\n";
		cin.clear();
		cin.ignore(100, '\n');
		break;
	}
	return 0;
}