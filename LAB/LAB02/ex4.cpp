#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x, y;

	cout << "x �Է� : ";
	cin >> x;
	cout << "y �Է� : ";
	cin >> y;

	cout << sqrt(x) << '\n';
	cout << exp(x) << '\n';
	cout << log10(x) << '\n';
	cout << cos(x) << '\n';
	cout << pow(x, y) << '\n';
	cout << fabs(x) << '\n';

	return 0;
}
