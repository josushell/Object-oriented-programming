#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

// ex2

int main() {
	ofstream fout;
	fout.open("example.txt");
	
	string s2 = "Objective Oriented Programming";
	fout << s2 << endl;
	fout << "Random Variables" << endl;
	fout << "Linear Algebra" << endl;

	fout.close();

	ifstream fin;
	string s1;
	fin.open("example.txt");

	if (!fin) {
		cout << "Error, no such file exists" << endl;
		exit(100);
	}
	
	while (getline(fin,s1)) {
		cout << s1 << endl;

	} // 한 줄
	
	 
	while (1) {
		fin >> s1;
		cout << s1 << endl;
		if (fin.eof()) {
			break;
		}
	} // 한 단어
}


// ex3
/*
int main() {
	double d1 = 1.23456789;
	cout.precision(10); // 출력값 길이

	cout.unsetf(ios::skipws); // 스페이스도 입력으로 생각

}
*/
// 응용

// ex2
/*
int main() {
	string data = "사랑,프로그래밍,의자,사랑의바보,영통역,천년의사랑,냉장고,객체지향";

	string keyword;
	int chk = 1 , start, end;
	int idx = 0;

	cout << "키워드 : ";
	cin >> keyword;
	cout << "검색결과 : ";

	if (data.find(keyword) == string::npos) {
		cout << "(" << keyword << ")" << "가 존재하지 않습니다" << endl;
	}
	else {
		while (1) {
			if (chk == 1) {
				idx = data.find(keyword);
			}
			else {
				idx = data.find(keyword, idx + keyword.length());
				if (idx == string::npos)
					break;
			}

			start = idx;
			end = idx;

			while (start != 0 && data[start - 1] != ',')
				start--;
			while (end != data.length() - 1 && data[end + 1] != ',')
				end++;

			for (int i = start; i <= end; i++) {
				cout << data[i] << " ";
			}
			chk++;
		}
	}

}*/

// ex3
#include <ctime>
/*
int main() {
	srand((unsigned int)time(NULL));

	ofstream ofs;
	ofs.open("ex3_matrx.txt");

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			ofs << setw(3)<<rand() % 101;
		}
		ofs << endl;
	}
}
*/


// ex5

int main() {
	ifstream ifs;
	ifs.open("ex5_input.txt");

	ofstream ofs;
	ofs.open("ex5_output.txt");

	int length;
	cout << "length: ";
	cin >> length;

	string s1, s2;
	while (getline(ifs, s1)) {
		s2 += s1;
	}

	int i = 0;
	while (1) {
		ofs << s2.substr(i * length, length) << endl;
		if (i == s2.length() / length)
			break;
		i++;
	}

	ifs.close();
	ofs.close();

}

