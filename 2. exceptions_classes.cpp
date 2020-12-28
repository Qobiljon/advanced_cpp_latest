#include <iostream>

using namespace std;

class CanGoWrong {
public:
    CanGoWrong() {
        char *pMemory = new char[99999999999999999];
        delete[] pMemory;
    }
};

int main_exceptions_classes() {
    try {
        CanGoWrong wrong;
    } catch (exception &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
