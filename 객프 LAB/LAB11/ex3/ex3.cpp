#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;


int main() {
	
	int n;
	cout << "홀수 숫자 하나를 입력해 주세요 : ";
	cin >> n;


	vector<vector<int>> vec(n, vector<int>(n));


	int m2 = floor(n / 2);
	int m1 = 0;

	for (int i = 1; i <= n * n; i++) {
		vec[m1][m2] = i;
		if (i % n == 0) {
			m1 += 1;
		}
		else {
			m1 -= 1;
			m2 += 1;
		}
		if (m1 < 0)
			m1 = n - 1;

		if (m2 > n - 1)
			m2 = 0;
	}

	for (auto& temp1 : vec) {
		for (auto& temp2 : temp1) {
			cout << setw(n) << temp2;
		}
		cout << endl;
	}
		
	
}