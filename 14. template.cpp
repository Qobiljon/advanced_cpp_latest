#include <iostream>
using namespace std;

template<class T>
class Test {
private:
	T obj;
public:
	Test(T obj) : obj(obj) { }
	void print() {
		cout << obj << endl;
	}
};

int main_template() {
	Test<int> t(5);
	t.print();
	
	return 0;
}
