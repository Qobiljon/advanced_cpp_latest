#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(string name, int age) : name(name), age(age) {}

    string to_string() {
        stringstream ss;
        ss << name << ", " << age << "y.o.";
        return ss.str();
    }

    friend bool comp(const Person &left, const Person &right);

    bool operator<(const Person &right) const {
        return this->name < right.name;
    }
};

bool comp(const Person &left, const Person &right) {
    return left.name < right.name;
}

int main_friend_comparatorsort() {
    vector<Person> arr;
    arr.push_back(Person("Qobiljon", 23));
    arr.push_back(Person("Nematjon", 24));
    arr.push_back(Person("Aziz", 24));
    arr.push_back(Person("Shoxrux", 26));
    arr.push_back(Person("Javoxir", 23));

    //sort(arr.begin(), arr.end(), comp);
    sort(arr.begin(), arr.end());

    for (auto iter = arr.begin(); iter != arr.end(); iter++)
        cout << iter->to_string() << endl;

    return 0;
}
