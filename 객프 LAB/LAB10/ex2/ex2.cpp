#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main() {
	vector<int> v1, v2;

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++) {
		v1.push_back(rand() % 11);
	}
	for (int j = 0; j < 10; j++) {
		v2.push_back(rand() % 21);
	}

	int max = 0, min=0;

	cout << "<vector 1>" << endl;
	for (auto iter = begin(v1); iter != end(v1); iter++) {
		cout << *iter << " ";
	}

	cout <<endl<< "<vector 2>" << endl;
	for (auto iter = begin(v2); iter != end(v2); iter++) {
		cout << *iter << " ";
	}


	for (auto iter1 = begin(v1); iter1 != end(v1); iter1++) {
		for (auto iter2 = begin(v2); iter2 != end(v2); iter2++) {
			if ((*iter1) * (*iter2) >= max) 
				max = (*iter1) * (*iter2);

			if ((*iter1) * (*iter2) <= min)
				min = (*iter1) * (*iter2);
		}

	}

	cout << "\n\n" << "ÃÖ´ñ°ª = " << max << endl;
	cout << "ÃÖ¼Ú°ª = " << min << endl;

}