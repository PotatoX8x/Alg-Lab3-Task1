#pragma once
#include <iostream>

using namespace std;

typedef char elementtype;

class STACK {
		int top;
		elementtype* elements;
	public:
		static int maxlength;

		STACK();
		~STACK();

		void MAKENULL();
		bool EMPTY();
		elementtype TOP();
		void POP();
		void PUSH(elementtype);
		void PRINT();
};