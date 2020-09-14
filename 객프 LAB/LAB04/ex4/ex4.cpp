#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	ofstream ofs;
	ifstream ifs1, ifs2;

	ofs.open("output.txt");
	ifs1.open("test1.txt");
	ifs2.open("test2.txt");

	string s1, s2;

	while (getline(ifs1, s1)) {
		ofs << s1 << endl;
	}
	ofs << endl;
	while (getline(ifs2, s2)) {
		ofs << s2 << endl;
	}

	ifs1.close();
	ofs.close();
	ifs2.close();

	return 0;
}