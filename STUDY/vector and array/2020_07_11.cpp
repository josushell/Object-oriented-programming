#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

// 11.8 make_random_vector
/*
void print(const vector<int>& v) {
	for (int elem : v) {
		cout << elem << " ";
	}
	cout << endl;
}
void make_random(vector<int>& v, int size) {
	v.clear();
	int n = rand() % size + 1;
	for (int i = 0; i < n; i++) {
		v.push_back(rand());
	}
}

int main() {
	srand(2);
	vector<int> list;
	cout << "vector initailly: ";
	print(list);
	make_random(list, 20);
	cout << "1st random vector: ";
	print(list);
	make_random(list, 5);
	cout << "2nd random vector: ";
	print(list);
	make_random(list, 10);
	cout << "3rd random vector: ";
	print(list);

	return 0;
}
*/

// 11.9 prime_list
/*
void print(const vector<int>& v) {
	for (int elem : v) {
		cout << elem << " ";
	}
	cout << endl;
}

bool is_prime(int n) {
	if (n < 2)
		return false;
	else {
		bool result = true;
		double r = n, root = sqrt(r);
		for (int trial_factor = 2; result && trial_factor <= root; trial_factor++) {
			result = (n % trial_factor != 0);
		}
		return result;
	}
}
vector<int> primes(int begin, int end) {
	vector<int> result;
	result.clear();
	for (int i = begin; i <= end; i++) {
		if (is_prime(i))
			result.push_back(i);
	}
	return result;
}
int main() {
	int low, high;
	cout << "Please enter lowest and highest values in the range : ";
	cin >> low >> high;

	vector<int> prime_list = primes(low, high);
	print(prime_list);
	
	return 0;
}
*/

// 11.10 two_dim_vector
/*
using Matrix = vector < vector<double>>;

void populate_matrix(Matrix& m) {
	cout << "Enter the " << m.size() << " rows of the matrix" << endl;
	for (int row = 0; row < m.size(); row++) {
		cout << "Row #" << row << " (enter " << m[row].size() << " values)";
		for (double& elem : m[row]) {
			cin >> elem;
		}
	}
}

void print_matrix(Matrix& m) {
	for (vector<double>& row : m) {
		for (double elem : row) {
			cout << setw(5) << elem;
		}
		cout << endl;
	}
}

int main() {
	int row, cols;
	cout << " How many rows? ";
	cin >> row;
	cout << "How many cols? ";
	cin >> cols;

	Matrix mat(row, vector<double>(cols));
	populate_matrix(mat);
	print_matrix(mat);

	return 0;
}
*/

// 11.3 pointer_array_print
/*
int main() {
	int a[] = { 2,4,6,8,10,12,14,16,18,20 }, * p;
	//p = &a[0];
	p = a; //배열은 바로 주소이기 때문에 이게 가능

	for (int i = 0; i < 10; i++) {
		cout << *p << " " << endl;
		p++;
	}
	cout << endl;

	return 0;
}
*/
// Array는 기본이 주소값

// 11.14 pointer_array_print_2
/*
int main() {
	int a[] = { 2,4,6,8,10,12,14,16,18,20 }, * begin, * end, * cursor;

	begin = a;
	end = a + 10;

	cursor = begin;
	for (int i = 0; i < 10; i++) {
		cout << *cursor << endl;
		cursor++;
	}
	return 0;
}
*/

// 11.15 recursive_array_print

/*
//void iterative_print(const int a[], int n)
void iterative_print(const int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void recursive_print(const int* a, int n) {
	if (n > 0) {
		cout << *a << " ";
		recursive_print(a + 1, n - 1);
	}
	cout << endl;
}
int main() {
	int list[] = { 23,-3,4,215,0,-3,2,23,100,88,-10 };
	iterative_print(list, 11);
	recursive_print(list, 11);

	return 0;
}
void print(int* begin, int* end) {
	for (int* elem = begin; elem != end; elem++) {
		cout << *elem << " ";
	}
	cout << endl;
}
*/

// allocation: vector는 push_back() -> 직접 접근 불가
//				array는 a[i]=1; -> 직접 접근

/*
int main() {
	int list[25];
	for (int i = 0; i < 25; i++) {
		list[i] = rand() % 101;
	}
	print(list, list + 25); //0~24
	print(list + 3, list + 8); //3 4 5 6 7
}
*/

// 11.19 resize_array
int main() {
	double sum = 0.0, * numbers, input;

	const int chunk = 3;
	int size = 0, capacity = chunk;

	numbers = new double[capacity];

	cout << "Please enter any number of nonnegative values "
		<< "(negative value ends the list) : ";
	cin >> input;

	while (input >= 0) {
		if (size >= capacity) {
			capacity += chunk;
			double* temp = new double[capacity];
			for (int i = 0; i < size; i++) {
				temp[i] = numbers[i];
			}
			delete[] numbers;
			numbers = temp;
			cout << "Expanding by " << chunk << endl;
		}
		numbers[size] = input;
		size++;
		sum += input;
		cin >> input;
	}
}