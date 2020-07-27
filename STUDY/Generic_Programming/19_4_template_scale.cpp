#include <iostream>
using namespace std;

template <int N>
int scale(int value) {
	return value * N; //template은 non-type parameter 가능
}

template <typename T, int N>
T scale2(const T& value) {
	return value * N;
}
int main() {
	cout << scale<3>(5) << endl;
	cout << scale2<double, 3>(5.3) << endl;
}

// typename 안쓰고 그냥
