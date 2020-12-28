#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception {
public:
    virtual const char *what() const throw() {
        return "exception_string";
    }
};

class Test {
public:
    void goesWrong() {
        throw MyException();
    }
};

int main_custom_exception() {
    Test test;

    try {
        test.goesWrong();
    } catch (exception &e) {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}
