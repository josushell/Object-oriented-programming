#include <iostream>
using namespace std;

int sum(int x, int y) {
	cout << "x + y = "<< x + y << '\n';
	return 0;
}
int sub(int x, int y) {
	cout << "x - y = " << x - y << '\n';
	return 0;
}
int mult(int x, int y) {
	cout <<"x * y = " << (x * y) << '\n';
	return 0;
}
int idiv(int x, int y) {
	cout <<"x / y = " << float(x) /float(y) << '\n';
	return 0;
}

int main() {
	int x, y;
	cout << "x �Է� : ";
	cin >> x;
	cout << "y �Է� : ";
	cin >> y;

	sum(x, y);
	sub(x, y);
	mult(x, y);
	idiv(x, y);

	return 0;
} 
