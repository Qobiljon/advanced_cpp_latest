#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool is3Chars(string str) {
	return str.length() == 3;
}

template<typename T>
int _count_if(const vector <T> &objs, bool (*comparator)(T)) {
	int count = 0;
	for(T obj : objs)
		if(comparator(obj))
			count++;
	return count;
}

int main_passing_functions_as_arg_countif() {
	vector<string> v = { "0123", "456", "7", "890", "12", "345", "67", "890" };
	
	cout << count_if(v.begin(), v.end(), is3Chars) << endl;
	cout << _count_if(v, is3Chars) << endl;
	cout << _count_if({"123", "4", "56", "789", "0"}, is3Chars) << endl;
	
	return 0;
}
