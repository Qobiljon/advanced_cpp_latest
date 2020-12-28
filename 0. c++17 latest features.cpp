#include <iostream>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;


// 1. unpacking a tuple
void unpack_tuple() {
    // auto         => copy
    // auto&        => lvalues (modifiable)
    // const auto&  => lvalue/rvalue -> but make it const (returns const_iterator)
    // const auto&& => rvalues (non-modifiable)

    const auto&[a, b, c, d] = tuple(1, string("Hello"), true, 'a');
    cout << boolalpha << a << ' ' << b << ' ' << c << ' ' << d << endl;
}

// 2. unpacking/traversing elements of map
void traverse_map() {
    map<string, int> m;
    m.insert(pair("John", 25));
    m.insert(pair("Wick", 23));

    cout << '{';
    for (const auto&[key, value] : m)
        cout << key << ": " << value << ", ";
    cout << '}' << endl;
}

// 3. new way of if (with init)
void if_with_init(int a) {
    if (const int MAX = 5; a < MAX)
        cout << a << " is less than MAX(" << MAX << ")" << endl;
    else
        cout << a << " is greater than MAX(" << MAX << ")" << endl;

    int MAX = 8;
    cout << "local variable: MAX=" << MAX << endl;
}

// 4. find substring and replace
void find_replace(string text, string from, string to) {
    stringstream ss(text);
    for (string word; ss >> word;) {
        if (word.rfind(from) == std::string::npos)
            word.replace(0, from.length(), to);
        cout << word << ' ';
    }
    cout << endl;
}

// 5. inline value and function
class A {
public:
    inline static const int a = 5;

    inline static void print() {
        cout << A::a << endl;
    }
};

// 6. static-if (compile time discarding useless part of a code)
template<class T>
auto get_value(T t) {
    if constexpr(is_pointer_v<T>)
        return *t;
    else
        return t;
}

// 7. constexpr (if)
template<int N>
constexpr int fibonacci() {
    if constexpr(N >= 2)
        return fibonacci<N - 2>() + fibonacci<N - 1>();
    else
        return N;
}

struct S {
    int n;
    std::string s;
    float d;
};

template<std::size_t I>
auto &get(S &s) {
    if constexpr (I == 0)
        return s.n;
    else if constexpr (I == 1)
        return s.s;
    else if constexpr (I == 2)
        return s.d;
}

// 8. fold expressions
template<typename ...T>
auto sum(T ... args) {
    return (args + ...);
}

template<class ...T>
void printAll(T ... args) {
    (cout << ... << args) << endl;
}

template<class V, typename ...T>
void addAll(vector<V> &v, T ... args) {
    (v.push_back(args), ...);
}

// 9. lambda expressions
void runLambda() {
    bool (*isDigit)(char) = [](char c) -> bool { return c >= '0' && c <= '9'; };
    cout << boolalpha << "'a' is digit = " << isDigit('a') << endl;
    cout << boolalpha << "'7' is digit = " << isDigit('7') << endl;

    string txt = "Hello123asd567";
    cout << '"' << txt << "\" contains "
         << count_if(txt.begin(), txt.end(), [](char c) -> bool { return c >= '0' && c <= '9'; }) << " digits" << endl;
}

int main_cpp17_latest_features() {
//	unpack_tuple();

//	traverse_map();

//	if_with_init(6);

//	find_replace("What's up {name}?", "{name}", "Qobiljon");

//	A::print();

//	cout << get_value((char (*)(char))get_value) << endl;

//	cout << fibonacci<5>() << endl;
//	if(S s = {1, "2", 3}; true)
//		cout << get<0>(s) << ' ' << get<1>(s) << ' ' << get<2>(s) << endl;

//	cout << sum(1,2,3,4) << endl;
//	printAll(false, 123, "45678", '9');
//	vector<int> v;
//	addAll(v, 1, 2, 3, 4);
//	for(auto& elem : v)
//		cout << elem << ' ';
//	cout << endl;

//	runLambda();

    return 0;
}
