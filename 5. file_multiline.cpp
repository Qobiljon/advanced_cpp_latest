#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main_file_multiline() {
    fstream fs("/Users/kevin/Desktop/CppProficiency/CppProficiency/code.cpp", ios::in);

    string line;
    if (fs.is_open()) {
        while (getline(fs, line)) {
            cout << line << endl;
        }
        fs.close();
    } else {
        cout << "failed to open the file" << endl;
    }

    return 0;
}
