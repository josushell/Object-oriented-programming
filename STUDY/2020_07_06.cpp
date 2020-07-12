#include <iostream>
#include <vector>
using namespace std;


int main() {
	double sum = 0.0;
	const int number_of_entries = 5;
	vector<double> numbers(number_of_entries);

	cout << "Please enter " << number_of_entries << " numbers : ";
	for (int i = 0; i < number_of_entries; i++) {
		cin >> numbers[i];
		sum+=numbers[i];
	}
	cout << "The average of ";
	for (int i = 0; i < number_of_entries-1; i++) {
		cout << numbers[i] << ", ";
		cout << numbers[number_of_entries - 1] << " is " << sum / number_of_entries << endl;
	}
	return 0;
}


int main() {
	const int size = 3;
	vector<int> a(size, 5);
	cout << "a contains ";
	for (int i = 0; i < size; i++) {
		a.at(i) = 8;
	}
	cout << "a contains ";
	for (int i = 0; i < size; i++) {
		cout << a.at(i) << " ";
	}
	cout << "\n\n";
	for (int& elem : a) {
		elem = 7;
	}
	for (int elem : a) {
		cout << elem;
	}
	cout << endl;
}

void printf(vector<int> v) {
	for (int elem : v)
		cout << elem << " ";
	cout << endl;
}
int sum(vector<int> v) {
	int sum = 0;
	for (int elem : v) {
		sum += elem;
	}
	return sum;
}

int main() {
	vector<int> list{ 2,4,6,8 };
	printf(list);
	cout << sum(list) << endl;

	int n = list.size();
	for (int i = 0; i < n; i++) {
		list[i] = 0;
	}

	for (int& elem : list) {
		elem = 0;
	}

	print(list);
	cout << sum(list) << endl;

	return 0;
}

#include <cmath>
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

		for (int trial_factor = 2; result && trial_factor <= root; trial_factor++)
		{
			result = (n % trial_factor != 0);
		}
		return result;
	}
}
vector<int> primes(int begin, int end) {
	vector<int> result;
	for (int i = begin; i < +end; i++) {
		if (is_prime(i))
			result.push_back(i);
		return result;
	}

}
int main() {
	int low, high;
	cout << "Please neter lowest and highest value in" << "the range:";
	cin >> low >> high;

	vector<int> prime_list = primes(low, high);
	print(prime_list);

	return 0;
}