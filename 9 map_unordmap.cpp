#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main_map_unordmap(){
	unordered_map<int, int> map;
	for(int n = 0; n < 10; n++)
		map[n] = n+10;
	
	// cout << (map.find(9) == map.end()) << endl;
	unordered_map<int, int>::iterator iter = map.begin();
	while(iter != map.end()){
		pair<int, int> pr = *iter;
		if(pr.first == 5)
			map.insert(pair<int, int>(1234, 1234));
		cout << pr.first << ' ' << pr.second << endl;
		iter++;
	}
	
	return 0;
}
