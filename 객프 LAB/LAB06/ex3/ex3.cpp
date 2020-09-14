#include <iostream>
using namespace std;

int fibonacci(int);

int main() {
	int n;
	int* p;

	cout << "n : ";
	cin >> n;

	p = new int(n);

	for (int i = 0; i < n; i++) {
		*p = fibonacci(i);
		cout << *p << " ";
	}

	delete p;
}
int fibonacci(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}