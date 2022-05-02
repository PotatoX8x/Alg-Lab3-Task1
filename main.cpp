#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
    STACK S;
	int c=-1;
	char x;
	while (c != 0) {
		cout << "Choose an operation: " << endl;
		cout << "1 - MAKENULL" << endl;
		cout << "2 - POP" << endl;
		cout << "3 - PUSH clone" << endl;
		cout << "4 - PUSH new" << endl;
		cout << "5 - PRINT" << endl;
		cout << "0 - Exit" << endl;
		cout << "Your choice: ";
		cin >> c;
		switch (c) {
		case 1: {
			S.MAKENULL();
			system("cls");
			break;
		}
		case 2: {
			S.POP();
			system("cls");
			break;
		}
		case 3: {
			if (S.EMPTY()) {
				cout << "Stack is empty" << endl;
				system("pause");
			}
			else {
				S.PUSH(S.TOP());
			}
			system("cls");
			break;
		}
		case 4: {
			cout << endl << "Enter element: ";
			cin >> x;
			S.PUSH(x);
			system("cls");
			break;
		}
		case 5: {
			S.PRINT();
			system("pause");
			system("cls");
			break;
		}
		case 0: {
			return 0;
		}
		default: {
			cout << "Invalid choice." << endl;
			system("pause");
			system("cls");
			break;
		}
		}
	}
    return 0;
}
