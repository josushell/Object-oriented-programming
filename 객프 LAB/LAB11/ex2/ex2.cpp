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

		cout << "문자열 하나를 입력해주세요 : ";
		cin >> s;
		
		cout << "입력하신 문자열의 역순 : ";
		for (auto iter =s.length(); iter!=0; iter--) {
			cout << s[iter];
			reverse_s += s[iter];
		}
		cout << s[0];
		reverse_s += s[0];
		new_reverse=reverse_s.substr(1, reverse_s.length());

		cout <<endl<< "이 문자는 회문";

		if (new_reverse == s) {
			cout << "입니다." << "\n\n";
		}
		else {
			cout << "이 아닙니다." << "\n\n";
		}

	}
}