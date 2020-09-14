#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	ifstream ifs;
	ofstream ofs;
	int n;
	string s1;
	string s2;

	ifs.open("input.txt");
	ofs.open("new_output.txt");

	cout << "length : ";
	cin >> n;

	while (getline(ifs, s1))
	{
		s2 += s1;
	}

	int i = 0;
	while (true)
	{
		ofs << s2.substr(i * n, n) << endl;
		if (i == s2.length() / n)
			break;
		i++;
	}
	return 0;

	ifs.close();
	ofs.close();

	return 0;
}