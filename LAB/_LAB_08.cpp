#include <iostream>
#include<vector>
#include <string>
#include <iomanip>
using namespace std;

// ex1
/*
void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main() {
	int a = 10, b = 20;
	cout << a << ", " << b << endl;
	swap(&a, &b);
	cout << a << ", " << b << endl;
}
*/

// ex2
/*
int sum(int x, int y) { return x + y; }
int mult(int x, int y) { return x * y; }
int evaluate(int (*func)(int, int), int x, int y) {
	// 함수 포인터 쓸 때 자료형 꼭 같이 쓰기
	return func(x, y);
}
int main() {
	int(*func)(int, int);
	func = &sum;
	cout << func(10, 20) << endl;
	func = &mult;
	cout << evaluate(&sum, 100, 200) << endl;
	cout << evaluate(&mult, 100, 200) << endl;
	return 0;
}
*/

// ex3
/*
void print(const vector<int> &vec){
	for (unsigned i = 0; i < vec.size(); i++) {
		cout << vec[i] << "\t";
	}
	cout << endl;
}
int main() {
	vector<int> vec{ 10,20,30 };
	print(vec);

	vec[0] = 100;
	vec.at(1) = 200;
	print(vec);

	vec.push_back(400);
	print(vec);

	vec.pop_back();
	print(vec);
	cout << endl;

	for (int& elem : vec) {
		cout << "enter an element of vector v : ";
		cin >> elem;
	}
	cout << endl;
	cout << "[ vector v ]" << endl;
	for (int elem : vec) {
		cout << elem << "\t";
	}
	cout << endl;
	return 0;
}
*/

// ex4
/*
bool is_prime(int num) {
	if (num < 2)
		return false;
	int n = sqrt(num);
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
vector<int> primes(int &lower, int &upper) {
	vector<int> v;
	for (int i = lower; i <= upper; i++) {
		if (is_prime(i) == 1) {
			v.push_back(i);
		}
	}
	return v;
}
int main() {
	int lower = 10, upper = 100;
	vector<int> vec = primes(lower, upper);
	for(int elem:vec){
		cout << elem << setw(5);
	}
	return 0;
}
*/

// 응용문제

// ex2
/*
void change_value(string* s) {
	cout << "input>> ";
	cin >> *s;
}
int main() {
	string str = "This is default value";
	cout << "<기본값 출력> " << str << endl;
	change_value(&str);
	cout << "<변환된 값 출력> " << str << endl;
}
*/

// ex3
/*
void reverse_vec(vector<int>* v) {
	for (int i = 0; i < 10; i++) {
		int temp = (*v)[i];
		(*v)[i] = (*v)[9 - i];
		(*v)[9 - i] = temp;
	}
}
int main() {
	vector<int> vec;
	for (int i = 1; i <= 10; i++) {
		vec.push_back(i);
	}
	cout << "기본 vector 값 : " << endl;
	for (int elem : vec) {
		cout << " " << elem;
	}
	reverse_vec(&vec);

	cout << endl << "함수 실행 후 vector 값 : " << endl;
	for (int elem2 : vec) {
		cout << " " << elem2;
	}

}
*/
// ex4
/*
int inputgrade(float grade) {
	cin >> grade;
	if ((grade - (int)grade) != 0.0 || grade < 0 || grade>100) {
		cout << "invalid input!!" << endl;
		exit(EXIT_FAILURE);
	}
	else
		return (int)grade;
}
int* topgrade(const vector<int>& grade) {
	int max = 0;
	for (int i = 0; i < grade.size(); i++) {
		if (max <= grade[i])
			max = grade[i];
	}
	return &max;
}
int main() {
	vector<int> grades;
	float _grade = 0;
	for (int i = 0; i < 3; i++) {
		cout << "input " << i << "-th grade(0~100): ";
		int grade = inputgrade(_grade);
		grades.push_back(grade);
	}
	cout << "Top grade: " << *topgrade(grades) << endl;
}
*/
