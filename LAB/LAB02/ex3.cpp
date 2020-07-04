#include <iostream>
using namespace std;

int print_DOB(int year = 2000, int month = 1, int day = 1) {
	cout << "나의 생년월일은 " << year << "년 " << month << "월 " << day << "일 입니다." << '\n';
	return 0;
}

int main() {
	int x, y, z;

	print_DOB();

	cout << "year 입력 : ";
	cin >> x;
	cout << "month 입력 : ";
	cin >> y;
	cout << "day 입력 : ";
	cin >> z;

	print_DOB(x, y, z);

	return 0;
}