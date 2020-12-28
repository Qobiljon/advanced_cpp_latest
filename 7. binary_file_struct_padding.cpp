#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#pragma pack(push, 1) // for disabling padding
struct Person {
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

int main_binfile_struct_padding() {
    cout << sizeof(Person) << endl;
    fstream fs;

    fs.open("file.bin", ios::out | ios::binary);
    if (fs.is_open()) {
        Person person = {"Qobiljon", 24, 67.0};
        fs.write(reinterpret_cast<char *>(&person), sizeof(Person));
        fs.close();
    } else {
        cout << "couldn't create a file" << endl;
    }

    fs.open("file.bin", ios::in | ios::binary);
    if (fs.is_open()) {
        Person person;
        fs.read(reinterpret_cast<char *>(&person), sizeof(Person));
        cout << fixed << setprecision(1) << person.name << ", " << person.age << ", " << person.weight << endl;
        fs.close();
    } else {
        cout << "couldn't open the file" << endl;
    }

    return 0;
}
