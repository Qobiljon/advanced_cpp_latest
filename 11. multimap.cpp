#include <iostream>
#include <map>

using namespace std;

int main_multimap() {
    multimap<int, string> _map;
    _map.insert(make_pair(30, "Mike"));
    _map.insert(make_pair(20, "Rogi"));
    _map.insert(make_pair(50, "Bob"));
    _map.insert(make_pair(10, "Alice"));
    _map.insert(make_pair(30, "Lucie"));

    auto iter = _map.begin();
    while (iter != _map.end()) {
        cout << iter->first << ": " << iter->second << endl;
        iter++;
    }
    cout << endl;

    // wrong usage
    iter = _map.find(30);
    while (iter != _map.end()) {
        cout << iter->first << ": " << iter->second << endl;
        iter++;
    }
    cout << endl;

    // finding multiple objects with the same key
    auto iters = _map.equal_range(30);
    iter = iters.first;
    while (iter != iters.second) {
        cout << iter->first << ": " << iter->second << endl;
        iter++;
    }

    return 0;
}
