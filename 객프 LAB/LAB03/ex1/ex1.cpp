#include <iostream>
using namespace std;

int main() {
	while (1) {
		int n;
		cout << "number : ";
		cin >> n;

		if (n >= 0) {
			if (n % 2 == 0) {
				cout << n << "�� ¦���Դϴ�." << endl;
				continue;
			}
			else {
				cout << n << "�� Ȧ���Դϴ�." << endl;
				continue;
			}
		}
		else {
			cout << "0 �̻��� ���ڸ� �Է��ϼ���." << endl;
			break;
		}
	}
	return 0;
}
