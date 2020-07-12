#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

/* 문제 1
int main() {
	string s1 = "name";
	cout << s1 << endl;
	cout << s1.length() << ", " << s1.size() << endl;

	cout << s1.empty() << endl;
	s1.clear();
	cout << s1.empty() << endl;

	s1 = "Good";
	s1 = s1+"-bye";

	cout << s1 << endl;
	cout << s1.at(4) << ", " << s1[4] << endl;

	cout << s1.substr(5, 3) << endl;
	cout << s1.find("od") << endl;

	cout << s1.find("od", 5) << endl;

	int od_index = s1.find("od");
	cout << s1.find("od", od_index + 5);
	cout << (s1.find("korea") == string::npos) << endl;

	return 0;

} */

/* 문제 2
int main() {
	ofstream fout;
	fout.open("example.txt");

	string s2 = "Objective Oriented Programming";
	fout << s2 << endl;
	fout << "Random variable" << endl;
	fout << "Linear Algebra" << endl;

	fout.close();

	ifstream fin;
	string s1;
	fin.open("example.txt");

	if (!fin) {
		cout << "Error, no such file exists" << endl;
		exit(100);
	}

	// 한 줄씩
	while (getline(fin, s1)) //fin.peek()==EOF or !fin.eof()
	{
		cout << s1 << endl;
	}

	//한 단어씩
	while (1) { 
		fin >> s1;
		cout << s1 << endl;
		if (fin.eof()) {
			break;
		}
	}
	fin.close();
	return 0;
}
*/

/* 문제 3
int main() {
	double d1 = 1.23456789;

	cout << d1 << endl;

	cout.precision(10);
	cout << setw(10);
	cout.precision(3);
	cout << d1 << endl;

	char ch1;
	char ch2;

	cin >> ch1;
	cout << "(" << ch1 << ")" << endl;

	cin.ignore();

	cin.unsetf(ios::skipws);
	cin >> ch2;
	cout << "(" << ch2 << ")" << endl;

	return 0;
}
*/

/* 응용 문제 1
int main() {
	string city, area, street, building;

	cout << "시 : ";
	cin >> city;
	cout << "구 : ";
	cin >> area;
	cout << "로 : ";
	cin >> street;
	cout << "건물명 : ";
	cin >> building;

	cout << "\n집 주소 : " << city + area + street + building << endl;

	return 0;
}
*/

/* 응용 문제 3
int main() {
	string data = "사랑,프로그래밍,의자,사랑의 바보,영통역,천년의사랑,냉장고,객체지향";
	string keyword;
	int index;

	cout << "키워드 : ";
	cin >> keyword;

	cout << "검색결과 : ";

	index= data.find(keyword);
	cout << data.substr(index, 2);



}
*/

/* 응용 문제 3
int main() {
	ofstream ofs;
	ofs.open("temp.txt");

	cout << ' ';
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			int n = rand() % 101;
			cout << n << setw(3);
		}
		cout << endl;
	}
	return 0;

}
*/

/* 응용 문제 4
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
*/

int main() {
	ifstream ifs;
	ofstream ofs;
	string s;
	int n;

	ifs.open("input.txt");
	ofs.open("new_output.txt");

	cout << "length : ";
	cin >> n;
/*
	while (1) {
		ifs >> s;
		cout << s << endl;
		if (ifs.eof()) {
			break;
		}
	}
*/
	for (int i = 0; i < n; i++) {
		while (!ifs.eof()) {

		}

	}

	ifs.close();
	ofs.close();

	return 0;
}