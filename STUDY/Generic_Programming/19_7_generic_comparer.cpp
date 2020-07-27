#include <iostream>
using namespace std;

template <typename T>
class Comparer {
	int compare_count;
	int swap_count;
	bool (*com)(const T&, const T&);

protected:
	virtual bool compare_impl(const T& m, const T& n) {
		return com(m, n);
	}
	virtual void swap_impl(T& m, T& n) {
		T temp = m;
		m = n;
		n = temp;

	}
public:
	Comparer(bool (*f)(const T&, const T&)) :
		compare_count(0), swap_count(0), com(f) {};

	void reset() {
		compare_count = swap_count = 0;
	}

	bool compare(const T& m, const T& n) {
		compare_count++;
		return compare_impl(m, n);
	}

	void swap(T& m, T& n) {
		swap_count++;
		swap_impl(m, n);
	}

	int comparison() const {
		return compare_count;
	}
	int swaps() const {
		return swap_count;
	}

};

template <typename T>
void selection_sort(vector<T>& a, Comparer<T>& compare) {
	int n = a.size();

	for (int i = 0; i < n - 1; i++) {
		int small = i;
		for (int j = i + 1; j < n; j++) {
			if (compare.compare(a[j], a[small]))
				small = j;
		}
		if (i != small)
			compare.swap(a[i], a[small]); //utility의 swap함수 기억
	}

};