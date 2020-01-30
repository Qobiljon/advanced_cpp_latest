#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <map>
using namespace std;

class Person{
private:
	string name;
	int age;
	mutable char crap;
public:
	Person(): name(""), age(0) { }
	Person(const Person &other): name(other.name), age(other.age) { }
	Person(string name, int age): name(name), age(age) { }
	
	string to_string() const {
		ostringstream oss;
		oss << this->name << ' ' << this->age;
		crap = 'a'; // mutable
		return oss.str();
	}
	
	bool operator<(const Person &right) const {
		return this->age < right.age;
	}
};

int main_map_custom_key() {
	map<Person, int> _map;
	_map.insert(pair<Person, int>(Person("Qobiljon", 25), 0));
	
	map<Person, int>::iterator iter = _map.begin();
	while(iter != _map.end()){
		cout << iter->first.to_string() << ": " << iter->second << endl;
		iter++;
	}
	return 0;
}
