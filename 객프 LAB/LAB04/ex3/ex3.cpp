#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	ofstream ofs;
	ofs.open("temp.txt");

	cout << ' ';
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			int n = rand() % 101;
			cout << n << setw(3);
		}
		cout << endl;
	}
	ofs.close();

	return 0;

}