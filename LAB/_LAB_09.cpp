#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ex1
/*
int main() {
	vector<vector<int>> vec(2, vector<int>(3));

	for (vector<int>& v : vec) {
		for (int& elem : v) {
			cin >> elem;
		}
	}
	for (auto v : vec) {
		for (auto elem : v) {
			cout << elem << "\t";
		}
		cout << endl;
	}
	auto a = 10;
	auto b = 10.1;
	auto c = 'd';
	cout << a<<", " << b << ", " << c << endl;

	return 0;
}
*/

// ex2
/*
int main() {
	int ary[3] = { 1,2,3 };
	cout << ary << ", " << *ary <<", "<< ary[0] << endl;
	cout << &ary[1] << ", " << *ary+1 << ", " << ary[1] << endl;
}
*/

// ex3
/*
void print(const int* ar, const int length) {
	for (int i = 0; i < length; i++) {
		cout << ar[i] << "\t";
	}
	cout << endl;
}
int sum(int* begin, int* end) {
	int* curr = begin;
	int result = 0;
	while (curr != end) {
		result += *curr;
		curr++;
	}
	return result;
}
int main() {
	int ary[] = { 10,20,30,40,50 };
	print(ary, 5);
	int* begin, * end;
	begin = ary;
	end = &ary[5];
	cout << sum(begin, end) << endl;
}
*/

// ex4
/*
int main() {
	int size;
	cout << "Size: ";
	cin >> size;
	const int len = 10;
	int staticArr[len];

	double* dynamicArr;
	dynamicArr = new double[size];

	for (int i = 0; i < size; i++) {
		cout << "dynamic\t";
	}
	cout << endl;
	delete[] dynamicArr;

	return 0;
}
*/

// ex5
/*
int main() {
	int matrix[2][3] = { {1,2,3}, {4,5,6} };

	for (int row = 0; row < 2; row++) {
		for (int col = 0; col < 3; col++) {
			cout << matrix[row][col] << "\t";
		}
		cout << endl;
	}
	return 0;
}
*/

// ex6
/*
bool found_char(const char* s, char c) {
	while (*s != '\0') {
		if (*s == c)
			return true;
		s++;
	}
	return false;
}
int main() {
	const char* ch = "phrase";
	for (char c = 'a'; c <= 'z'; c++) {
		cout << "[" << c << "] is ";
		if (!found_char(ch, c))
			cout << "NOT ";
		cout << "in " << ch << endl;
	}
	return 0;
}
*/

// 응용

// ex1

// ex2 다시
/*
int* make_arr(int n) {
	int* arr = new int(n);
	int num = 1;
	for (int i = 0; i < n; i++) {
		if (num % 2 != 0)
			arr[i] = num;
		num++;
	}
	return arr;
	delete[] arr;
}

void print_arr(int* a, int n) {
	cout << endl << "Odd Number Array: " << endl;
	for (int i = 0; i < n; i++) {
		cout << *a << " ";
	}
	cout << endl;
}
int sum_arr(int* a, int n) {
	int s = 0;
	while (n) {
		s += *a;
		a++;
		n--;
	}
	return s;
}
int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	int* arr = make_arr(n);
	print_arr(arr, n);

	int sum = sum_arr(arr, n);
	cout << endl << "Sum of the array: " << sum << endl;

	delete[] arr;
	return 0;
}
*/
// ex3
#include <ctime>
#include <cstdlib>
/*
int main() {
	int n, size;
	int* arr;

	while (1) {
		cout << "Please enter a number: ";
		cin >> n;

		if (n < 2) {
			cout << "Wrong number!!!" << endl;
			exit(1);
		}

		size = n / 2;
		cout << "Size of random array: " << size << endl;

		arr = new int[size];
		srand((unsigned int)time(NULL));
		for (int i = 0; i < size; i++) {
			arr[i] = rand() % n + 1;
		}
		
		cout << "[ Array ]" << endl;
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		// 포인터로 변환된 배열은 범위 기반 for불가
		// 마찬가지로 동적 배열도 범위 기반 for 불가
		// -> 배열의 크기를 모르기 때문

		string dup = " not ";
		for (int i = 0; i < size; i++) {
			for (int j = i + 1; j < size; j++) {
				if (arr[i] == arr[j]) {
					dup = " ";
					break;
				}
			}
		}
		cout << "Duplicates" << dup << "found." << "\n\n";

		delete[] arr;
	}


}
*/

// ex4
int** buildTable(int n) {

}
void make_identity_matrix(int** table, int n) {
	for (int i = 0; i < n; i++) {
		*table[i] = i;
	}
}