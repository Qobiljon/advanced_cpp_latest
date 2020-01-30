#include <iostream>
#include <fstream>
using namespace std;

/*
 #include <filesystem>
 cout << __fs::filesystem::current_path() << endl;
 */

int main_file_singleline(){
	fstream fs;
	fs.open("res.txt", ios::out);
	if(fs.is_open()){
		fs << 1 << 2 << " Hola " << 2 << 1 << endl;
		fs.close();
	} else {
		cout << "couldn't open a file for writing" << endl;
	}
	
	fs.open("res.txt", ios::in);
	if(fs.is_open()){
		string str;
		getline(fs, str);
		cout << str << endl;
		fs.close();
		
		if(remove("res.txt"))
			cout << "file res.txt couldn't be deleted" << endl;
	} else {
		cout << "couldn't open a file for reading" << endl;
	}
	
	return 0;
}
