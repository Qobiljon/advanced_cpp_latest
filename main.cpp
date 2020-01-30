#include <iostream>
#include <unordered_map>
#include <sstream>

using namespace std;

struct Person {
    string name;
    int age;

    string to_string() const {
        ostringstream oss;
        oss << '(' << name << ',' << age << ')';
        return oss.str();
    }
};

int main() {
    unordered_map<int, Person> m;
    m[0] = {"Qobiljon", 23};
    m[1] = {"Nematjon", 24};
    m[2] = {"Aziz", 21};

    cout << '{';
    for (const auto&[key, value] : m)
        cout << key << ":" << value.to_string() << ' ';
    cout << '}' << endl;

    return 0;
}
