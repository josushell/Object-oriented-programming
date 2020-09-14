#include <iostream>
using namespace std;

template <typename T>
class Point {
	T x1;
	T x2;
	T y1;
	T y2;
public:
	Point() {};

	void setPointFromKeybord() {
		cout << "첫번째 x : ";
		cin >> x1;
		cout << "첫번째 y : ";
		cin >> y1;
		cout << "두번째 x : ";
		cin >> x2;
		cout << "두번째 y : ";
		cin >> y2;
	}
	void print() {
		int x_result = (x2 - x1) * (x2 - x1);
		int y_result = (y2 - y1) * (y2 - y1);
		
		int result = sqrt(x_result + y_result);

		cout <<endl<< " 두 점 사이의 거리 = " << result << endl;
	}
};
int main() {
	Point<int> p;
	p.setPointFromKeybord();
	p.print();
	return 0;
}