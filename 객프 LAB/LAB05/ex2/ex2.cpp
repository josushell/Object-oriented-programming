#include <iostream>
using namespace std;

void change_string(string* s) {
	cout << "input> ";
	cin >> *s;
}
int main() {
	string str = "This is default value";
	cout << "�⺻�� ���> " << str << endl;
	change_string(&str);
	cout << "��ȯ�� �� ���> " << str << endl;

	return 0;
}