#include <iostream>
using namespace std;

void change_string(string* s) {
	cout << "input> ";
	cin >> *s;
}
int main() {
	string str = "This is default value";
	cout << "기본값 출력> " << str << endl;
	change_string(&str);
	cout << "변환된 값 출력> " << str << endl;

	return 0;
}