#include <iostream>
#include "classes/Complex.hpp"

using namespace std;
using namespace mathematics;

int main_complex_namespace_operators() {
	Complex c1(2, 3);
	Complex c2 = c1;
	c2 = c1;
	Complex c3 = c1 + c2;
	cout << c1 << " + " << c2 << " = " << c3 << endl;
	Complex c4 = c3 + 1;
	cout << c3 << " + 1 = " << c4 << endl;
	Complex c5 = 2 + c4;
	cout << "2 + " << c4 << " = " << c5 << endl;
	
	Complex c6 = {7, 6};
	if(c5 == c6) {
		cout << "EQ: " << c5 << " is equal to " << c6 << endl;
	} else {
		cout << "EQ: " << c5 << " is not equal to " << c6 << endl;
	}
	
	if(c5 != c6) {
		cout << "NE: " << c5 << " is not equal to " << c6 << endl;
	} else {
		cout << "NE: " << c5 << " is equal to " << c6 << endl;
	}
	
	return 0;
}
