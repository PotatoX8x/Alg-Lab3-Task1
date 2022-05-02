#include "Stack.h"

int STACK::maxlength = 10;

STACK::STACK() {
	top = maxlength+1;
	elements = new elementtype[maxlength];
}

STACK::~STACK() {
	delete[] elements;
}

void STACK::MAKENULL() {
	top = maxlength+1;
}

bool STACK::EMPTY() {
	if (top > maxlength)
		return true;
	return false;
}

elementtype STACK::TOP() {
	if (EMPTY()) {
		cout << "Stack is empty"<<endl;
		system("pause");
	}
	else {
		return elements[top - 1];
	}
}

void STACK::POP() {
	if (EMPTY()) {
		cout << "Stack is empty"<<endl;
		system("pause");
	}
	else {
		top++;
	}
}

void STACK::PUSH(elementtype x) {
	if (top==1) {
		cout << "Stack is full"<<endl;
		system("pause");
	}
	else {
		top--;
		elements[top - 1] = x;
	}
}

void STACK::PRINT() {
	if (EMPTY()) {
		cout << "Stack is empty"<<endl;
	}
	else {
		for (int i = top - 1; i < maxlength; i++) {
			cout << "\n " << elements[i];
		}
		cout << '\n' << "---" << '\n';
	}
}