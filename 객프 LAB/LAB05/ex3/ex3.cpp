#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void reverse_vec(vector<int> tempv) {
	vector<int>::reverse_iterator re = tempv.rbegin();
	for (; re != tempv.rend(); re++) {
		cout << setw(3)<<*re;
	}
}
int main() {
	vector<int> v(10);
	for (int i = 0; i < v.size(); i++) {
		v[i] = i + 1;
	}

	cout << "기본 vector 값:" << endl;

	for (int elem : v) {
		cout << elem << setw(3);
	}
	cout <<endl<< "함수 실행 후 vector 값: " << endl;
	reverse_vec(v);
	return 0;

}
