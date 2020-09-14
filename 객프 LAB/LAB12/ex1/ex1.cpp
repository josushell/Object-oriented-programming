#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> list{ 10, 20, 30, 40, 50 };
	int num;

	while (1)
	{	cout << "출력 할 숫자의 수 : ";
		cin >> num;

		try  {
			for (auto t = 0; t < num; t++){
				cout << list.at(t) << " ";
			}
			cout << endl;
		}
		catch (exception &e) {
			cout << "\nIndex is out of range, Please try again." << endl;

		}
		
	}
	return 0;
}