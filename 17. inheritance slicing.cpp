#include <iostream>

using namespace std;

class Parent {
private:
    int one;
public:
    Parent() : one(0) {}

    Parent(const Parent &other) {
        one = other.one;
        cout << "parent copy constructor" << endl;
    }

    virtual void print() {
        cout << "parent print" << endl;
    }
};

class Child : public Parent {
private:
    int two;
public:
    Child() : two(0) {}

    Child(const Child &other) {
        two = other.two;
        cout << "parent copy constructor" << endl;
    }

    void print() {
        cout << "child print" << endl;
    }
};

int main_inheritance_slicing() {
    // referencing Child oject with Parent type
    Child c1;
    Parent &p1 = c1;
    p1.print();

    // object slicing (upcasting)
    Parent p2 = Child();
    p2.print();

    return 0;
}
