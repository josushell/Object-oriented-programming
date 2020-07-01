#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Please enter two integer values: " << endl;
	cout << "A : ";
	cin >> a;
	cout << "B : ";
	cin >> b;

	int x = a;
	a = b;
	b = x;

	cout << "Value of A is : " << a << endl;
	cout << "Value of B is : " << b << endl;

	return 0;
}