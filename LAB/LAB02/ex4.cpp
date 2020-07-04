#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x, y;

	cout << "x 입력 : ";
	cin >> x;
	cout << "y 입력 : ";
	cin >> y;

	cout << sqrt(x) << '\n';
	cout << exp(x) << '\n';
	cout << log10(x) << '\n';
	cout << cos(x) << '\n';
	cout << pow(x, y) << '\n';
	cout << fabs(x) << '\n';

	return 0;
}
