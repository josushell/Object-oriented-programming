#include <iostream>
#include <vector>
using namespace std;

int main() {
	while (1) {
		int n;
		int* vec;

		cout << "Please enter number of values to process : ";
		cin >> n;

		if (n < 1)
			exit(100);

		vec = new int[n];

		cout << "Please enter numbers : ";
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}

		for (int i = 0; i < n; i++) {

			if (vec[i] >= n) {
				cout << " False" << "\n\n";
				break;
			}
			if (vec[i] < n) {
				cout << "True" << "\n\n";
				break;
				
			}
				for (int j = 0; j < n; j++) {

					if (j != j) {
						if (vec[i] == vec[j]) {
							cout << "False" << "\n\n";
							break;
						}
					}
				}
			}
			delete[] vec;
		}
		return 0;
	}
