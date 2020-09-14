#include <iostream>
using namespace std;

int get_gcd(int x, int y) {

	if (y == 0) {
		return x;
	}
	else {
		return get_gcd(y, x % y);
	}
}

int main() {
	int a, b;
	cin >> a >> b;

	cout << "gcd(" << a << ',' << b << ") = " << get_gcd(a, b) << endl;
	return 0;
}