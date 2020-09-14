#include <iostream>
using namespace std;

void calc_squared(int* n) {
	*n = *n * *n;
}
int main() {
	int n;
	cout << "input> ";
	cin >> n;

	calc_squared(&n);
	cout << "Á¦°ö °ª> " << n << endl;

	return 0;
}