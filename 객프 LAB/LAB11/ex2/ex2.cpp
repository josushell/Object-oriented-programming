#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string s;

	while(1) {
		string reverse_s;
		reverse_s.clear();

		string new_reverse;
		new_reverse.clear();

		cout << "���ڿ� �ϳ��� �Է����ּ��� : ";
		cin >> s;
		
		cout << "�Է��Ͻ� ���ڿ��� ���� : ";
		for (auto iter =s.length(); iter!=0; iter--) {
			cout << s[iter];
			reverse_s += s[iter];
		}
		cout << s[0];
		reverse_s += s[0];
		new_reverse=reverse_s.substr(1, reverse_s.length());

		cout <<endl<< "�� ���ڴ� ȸ��";

		if (new_reverse == s) {
			cout << "�Դϴ�." << "\n\n";
		}
		else {
			cout << "�� �ƴմϴ�." << "\n\n";
		}

	}
}