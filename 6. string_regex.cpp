#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

using namespace std;

int main_string_operations() {
    string str = "hello\t\nwhat's\n\t\nup?";

    str.erase(remove(str.begin(), str.end(), '\n'), str.end());
    str = regex_replace(str, regex("\\t"), " ");

    cout << str << endl;

    return 0;
}
