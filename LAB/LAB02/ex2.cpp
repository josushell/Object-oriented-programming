#include <iostream>
using namespace std;


int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mult(int x, int y) {
	return x * y;
}
float idiv(int x, int y) {
	float result = float(x) / float(y);
	return result;
}

int add_mult(int x, int y, int z) {
	cout << " (x + y) * z = " << mult(add(x, y), z) << '\n';
	return 0;
}
int mult_div(int x, int y, int z) {
	cout << " (x * y) / z = " << idiv(mult(x, y), z) << '\n';
	return 0;
}
int add_mult_add(int x, int y, int z) {
	cout << " (x + y) * (y + z) = " << mult(add(x, y), add(y, z)) << '\n';
	return 0;
}
int sub_div_sub(int x, int y, int z) {
	cout << " (x - y) / (x - z) = " << idiv(sub(x, y), sub(x, z)) << '\n';
	return 0;
}

int main() {
	int x, y, z;
	cout << " x 입력 : ";
	cin >> x;
	cout << " y 입력 : ";
	cin >> y;
	cout << " z 입력 : ";
	cin >> z;

	add_mult(x, y, z);
	mult_div(x, y, z);
	add_mult_add(x, y, z);
	sub_div_sub(x, y, z);

	return 0;
}