#include <iostream>
using namespace std;

template <int N>
int scale(int value) {
	return value * N; //template�� non-type parameter ����
}

template <typename T, int N>
T scale2(const T& value) {
	return value * N;
}
int main() {
	cout << scale<3>(5) << endl;
	cout << scale2<double, 3>(5.3) << endl;
}

// typename �Ⱦ��� �׳�
