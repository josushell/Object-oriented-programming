#include <iostream>
using namespace std;

int main() {
	while (1) {
		int n;
		cout << "number : ";
		cin >> n;

		if (n >= 0) {
			if (n % 2 == 0) {
				cout << n << "은 짝수입니다." << endl;
				continue;
			}
			else {
				cout << n << "은 홀수입니다." << endl;
				continue;
			}
		}
		else {
			cout << "0 이상의 숫자를 입력하세요." << endl;
			break;
		}
	}
	return 0;
}
