#include <iostream>
#include <vector>
using namespace std;

int main() {
	string city, area, street, building;

	cout << "�� : ";
	cin >> city;
	cout << "�� : ";
	cin >> area;
	cout << "�� : ";
	cin >> street;
	cout << "�ǹ��� : ";
	cin >> building;

	cout << "\n�� �ּ� : " << city + area + street + building << endl;

	return 0;
}