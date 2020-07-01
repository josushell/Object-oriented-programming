#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*기초문제 1*/
/*
class Point {
private:
	int x;
	int y;
	static int numCreatedObjects;

public:
	Point() :x(0), y(0) {
		numCreatedObjects++;
	}
	Point(int _x, int _y);
	~Point() {
		cout << "Destructed..." << endl;
	}
	static int getNumCreatedObject() { return numCreatedObjects; }

	void setXY(int _x, int _y) {
		this->x = _x;
		this->y = _y;
	}
	int getX() const;
	int getY() const;

	Point& operator=(Point& pt) {

	}

	Point operator+(Point& pt2) {

	}
	friend ostream& operator<<(ostream& cout, Point& pt);
	friend void print(const Point& pt);
	friend class SpyPoint;
};

static int numCreatedObjects = 0;

Point::Point(int _x, int _y) :x(_x), y(_y) {
	numCreatedObjects++;
}
int Point::getX() const {}
int Point::getY() const {}

void print(const Point &pt) {
	cout << pt.x << ", " << pt.y << endl << endl;
}


int main() {
	Point pt1(1, 2);
	cout << "pt1 : ";
	print(pt1);

	Point * pPt1 = &pt1;
	cout << "pt1 : ";
	
}
*/

/*응용문제 2*/
class Point {
private:
	int x;
	int y;

public:
	Point(int _x, int _y) :x(_x), y(_y) {};

	void setPoint(int _x, int _y) {
		x = _x;
		y = _y;
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
	
	cout << "두 좌표 사이의 길이는 " << *pP3<<"입니다." << endl;

	return 0;
}

/*응용문제 3*/
class Account {
private:
	string name;
	string id;
	int balance;
public:



};

int main() {
	Account acnt[3] = {
		Account
	}






}