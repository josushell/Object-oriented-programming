#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main() {
	vector<int> list;
	srand((unsigned int)time(NULL));
	int n = rand() % 100 + 1;

	for (int i = 0; i < n; i++) {
		list.push_back(i);
	}

	int cnt = -1;

	
	while (1) 
	{
		cnt++;
		try {
			list.at(cnt);

		}

		catch (exception& e) {
			cout << "���� list�� " << cnt+1 << "�� ũ�⸦ ������ �ִ�.";
			exit(1);
		}
	}
	
	return 0;
}