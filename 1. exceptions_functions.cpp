#include <iostream>
using namespace std;

void mightGoWrong() {
	bool error1 = false;
	bool error2 = false;
	bool error3 = true;

	if (error1)
		throw 8;
	if (error2)
		throw "error";
	if (error3)
		throw string("error str");
}

void usesMighGoWrong() {
	mightGoWrong();
}

int main_exceptions_functions()
{
	try {
		usesMighGoWrong();
	}
	catch (int e) {
		cout << "int: " << e << endl;
	}
	catch (const char* e) {
		cout << "const char: " << e << endl;
	}
	catch (string & e) {
		cout << "string ref: " << e << endl;
	}

	return 0;
}
