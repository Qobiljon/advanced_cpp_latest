#include <iostream>
#include <list>

using namespace std;

int main_list_iter() {
    list<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_front(0);

    list<int>::iterator iter = arr.begin();
    iter++;
    arr.insert(iter, 100);
    cout << "Element: " << *iter << endl;

    iter = arr.begin();
    iter++;
    iter = arr.erase(iter);
    cout << "Element: " << *iter << endl;

    iter = arr.begin();
    while (iter != arr.end()) {
        if (*iter == 2)
            arr.insert(iter, 1234);

        if (*iter == 1)
            iter = arr.erase(iter);
        else
            iter++;
    }

    for (list<int>::iterator iter = arr.begin(); iter != arr.end(); iter++)
        cout << *iter << ' ';
    cout << endl;

//	// vector
//	vector<vector<int>> arr(3, vector<int>(4, 7));
//	for(auto row : arr) {
//		for(auto val : row)
//			cout << val << ' ';
//		cout << endl;
//	}

    return 0;
}
