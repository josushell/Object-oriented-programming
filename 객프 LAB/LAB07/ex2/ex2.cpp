#include<iostream>
#include<string>
#include <cmath>
using namespace std;

class Point {
private:
	int x;
	int y;

public:
	Point(int _x, int _y) {
		x = _x;
		y = _y;
	}
	Point() :x(0), y(0) {};

	void setPoint(int _x, int _y) {
		x = _x;
		y = _y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

	Point operator-(Point& point) {
		Point result (this->x - point.getX(), this->y - point.getY());
		return result;
	}

	Point operator*(const Point &point) {
		Point result(this->x * point.x, this->y*point.y);
		return result;
	}


};


int main() {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	Point* pP1, * pP2, * pP3;

	cout << "첫번째 좌표(x1, y1)를 입력하세요 : ";
	cin >> x1 >> y1;

	cout << "두번째 좌표(x2, y2)를 입력하세요 : ";
	cin >> x2 >> y2;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);
	pP3 = new Point();

	*pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);

	double result = sqrt(pP3->getX() + pP3->getY());
	cout << "두 좌표 사이의 길이는 " << result << "입니다. " << endl;

	delete pP1, pP2, pP3;
	return 0;

}