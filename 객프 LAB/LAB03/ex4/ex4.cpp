#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	while (1) {
		cout << "number : ";
		cin >> n;

		if (n >= 1 && n <= 9) {
			for (int i = 1; i <= 9; i++) {
				cout << n << '*' << i << " = " << n * i << setw(4);
			}
			cout << '\n';
			continue;
		}
		else {
			cout << "1~9�� ������ �Է��ϼ���." << endl;
			break;
		}
	}
	return 0;
}
