#include <iostream>
#include <iomanip>
#include <string>
#include <functional>
#include <vector>
#include <list>
#include <cstdlib>
#include <array>
#include <ctime>
using namespace std;

/*기초문제 1*/
/*
int sum(int x, int y) { return x + y; }
int mult(int x, int y) { return x * y; }
int evaluate(int(*f)(int, int), int x, int y) {
	return f(x, y);
}
int main() {
	cout << evaluate(&sum, 2, 3) << endl;
	cout << evaluate(&mult, 2, 3) << endl;

	cout << evaluate([](int x, int y)->int{return x + y;}, 20, 30) << endl;
	cout<< evaluate([](int x, int y) {return x *y; }, 20, 30) << endl;

	[](int x, int y) {cout << x << ", " << y << endl; }(20, 30);

	auto f = [](int x ,int y) {return x - y; };
	cout << f(1000, 2000) << endl;

	return 0;
}
*/
/*기초문제 2*/

int evaluate2(function<int(int, int)> f, int x, int y) {
	return f(x, y);
}
int main() {
	int a = 10, b = 20;
	cout << evaluate2([a](int x, int y) {return a + x + y; }, 2, 3) << endl;
	
	[&]() {return a * b; }();


	auto f = [&](int x) {return a * x; };
	a=f(2);
	cout << "a: " << a << endl;

	return 0;
}

/*기초문제 3*/
/*
int main() {
	vector<int> v1 = { 1,2,3,4 };
	for (int& elem : v1) {
		cout << elem << '\t';
	}
	cout << endl;
	*/



















/*기초문제 4*/
/*기초문제 5*/

/*응용문제 1*/
/*응용문제 2*/
/*응용문제 3*/
/*응용문제 4*/











































