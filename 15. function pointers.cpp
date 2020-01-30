#include <iostream>
using namespace std;

void print() {
	cout << "print() called" << endl;
}

template<class T>
void print(T obj) {
	cout << "print(" << obj << ") called" << endl;
}

int main_function_pointers() {
	// pointer to a function with no parameters
	void (*p1)() = print; // or &print
	
	(*p1)();	// dereferencing
	p1();		// call by pointer
	
	// pointer to a function with a parameter
	void (*p2)(int) = print;
	p2(5);
	
	// casting a function name to pointer (inline)
	((void(*)(string))(print))("hi");
	
	return 0;
}
