#include <iomanip>
#include <string>
#include <functional>
#include <vector>
#include <list>
#include <array>
#include <ctime>
#include <iostream>
using namespace std;

int pseudorandom() {
	int y, x = 3;
	for (int i = 1; i <= 5; i++) {
		y = (7 * x + 4) % 9;
		x = y;
		cout << y << endl;
	}
	return 0;
}
int main() {
	int a;
	a = pseudorandom();
	cout << a << '\n';
	return 0;
}