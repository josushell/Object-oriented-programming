#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

class FileNotOpen :public exception {
	string filename;
public:
	FileNotOpen(const string& fname) {
		filename = "File '" + fname + "' not found ";
	}

	virtual const char* what() const throw() {
		return filename.c_str();
	}

};
class SizeInvalid :public exception {
	string s = "invlid vector<T> subscript";
public:
	SizeInvalid() {}
	virtual const char* what() const throw() {
		return s.c_str();
	}

};
void writefunc() {
	ofstream ofs;
	ofs.open("temp.txt");

	srand((unsigned int)time(NULL));

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			int n = rand() % 101;
			ofs << setw(4) << n;
		}
		ofs << endl;
	}
	ofs.close();

}
vector<vector<int>> make_vec(const string& str) {
	ifstream ifs(str);

	if (ifs.good()) {
		vector<vector<int>> v;
		int m1, m2;
		cout << "출력할 행 크기 : ";
		cin >> m1;
		cout << "출력할 열 크기 : ";
		cin >> m2;

		if (m1 <= 10 && m2 <= 10) {
			for (int i = 0; i < m1; i++) {
				int n;
				v.push_back(vector<int>());
				for (int j = 0; j < m2; j++) {
					ifs >> n;
					v.at(i).push_back(n);
				}
			}
			return v;
		}
		else
			throw SizeInvalid();
		
	}
	else
		throw  FileNotOpen(str);
}
void print(vector<vector<int>>& v) {

	for (auto& v1 : v) {
		for (auto& v2 : v1) {
			cout << setw(3) << v2;
		}
		cout << endl;
	}
}
int main() {
	writefunc();

	string str;
	cout << "파일 이름 : ";
	cin >> str;

	try {
		vector<vector<int>> vec = make_vec(str);
		try {
			print(vec);
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}		

	}
	catch (exception& e) {
		cout << e.what() << endl;
	}


	return 0;
}

