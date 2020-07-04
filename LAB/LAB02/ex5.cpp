#include <iostream>
using namespace std;

int get_data(int& x, int& y) {
	cout << "x 입력 : ";
	cin >> x;
	cout << "y 입력 : ";
	cin >> y;

	return 0;
}
int swap_call_by_value(int x, int y) {
	int z = x;
	x = y;
	y = z;

	return 0;
}
int swap_call_by_reference(int& x, int& y) {
	int z = x;
	x = y;
	y = z;

	return 0;
}
int main() {
	int x, y;
	get_data(x, y);

	cout << endl << "swap_call_by_value 함수 사용 전 " << endl;
	cout << "x = " << x << ", y = " << y << endl;
	cout << "swap_call_by_value 함수 사용 후" << endl;
	swap_call_by_value(x, y);
	cout << "x = " << x << ", y = " << y << "\n\n";

	cout << "swap_call_by_reference 함수 사용 전 " << endl;
	cout << "x = " << x << ", y = " << y << endl;
	cout << "swap_call_by_reference 함수 사용 후" << endl;
	swap_call_by_reference(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	return 0;
}