#include <iostream>
using namespace std;

int get_data(int& x, int& y) {
	cout << "x �Է� : ";
	cin >> x;
	cout << "y �Է� : ";
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

	cout << endl << "swap_call_by_value �Լ� ��� �� " << endl;
	cout << "x = " << x << ", y = " << y << endl;
	cout << "swap_call_by_value �Լ� ��� ��" << endl;
	swap_call_by_value(x, y);
	cout << "x = " << x << ", y = " << y << "\n\n";

	cout << "swap_call_by_reference �Լ� ��� �� " << endl;
	cout << "x = " << x << ", y = " << y << endl;
	cout << "swap_call_by_reference �Լ� ��� ��" << endl;
	swap_call_by_reference(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	return 0;
}