#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <utility>

template <typename T>
bool less_than(const T& a, const T& b) {
	return a < b;
}

template <typename T>
bool greater_than(const T& a, const T& b) {
	return a > b;
}

template <typename T>
void selection_sort(vector<T> vec, bool(*compare)(T a, T b)) {
	int n = vec.size();

	for (int i = 0; i < n - 1; i++) {
		int small = i;
		for (int j = i + 1; j < n; j++) {
			if (compare(vec[j], vec[small]))
				small = j;
		}
		if (i != small)
			swap(vec[i], vec[small]); //utility의 swap함수 기억
	}
}