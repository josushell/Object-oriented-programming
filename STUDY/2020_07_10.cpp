#include <iostream>
using namespace std;

class Point {
	double x;
	double y;
	static int countCreatedObjects;
public:
	Point();
	Point(int x, int y);
	~Point();
	void setPoint(int x, int y);
	int getX(void) const;
	int getY(void) const;
	static int getCreatedObject(void);
	Point operator+(const Point& point);
	Point& operator=(const Point& point);
	friend std::ostream& operator<<(std::ostream& os, const Point& point);
	friend class spyPoin;
};
int Point::countCreatedObjects = 0;
Point::Point() :x(0), y(0) { countCreatedObjects++; };
Point::Point(int x, int y) {
	cout << "constructor Point(int, int) invoked..." << endl;
	this->x = x;
	this->y = y;
	countCreatedObjects++;
}

Point::~Point() {
	cout << "(" << this->x << ":" << this->y << ") destructor invoked..." << endl;
}

void Point::setPoint(int x, int y) {
	this->x = x;
	this->y = y;
}
int Point::getX() const {
	return this->x;
}
int Point::getY() const {
	return this->y;
}
int Point::getCreatedObject() {
	return countCreatedObjects;
}
Point Point::operator+(const Point& point) {
	Point result(this->x + point.getX(), this->y + point.getY());
	return result;
}
Point& Point::operator=(const Point& point) {
	this->x = point.getX();
	this->y = point.getY();
	return *this;
}
std::ostream& operator<<(std::ostream& os, const Point& point) {
	return os << "(" << point.getX() << "," << point.getY() << ")";
}
class spyPoint {
public:
	void printPoint(const Point& point);
};
void spyPoint::printPoint(const Point& point) {
	cout << "{X:}" << point.getX() << "}" << "{Y:" << point.getY() << "}" << endl;
}
int main() {
	Point* pP1, * pP2;
	spyPoint sp;

	cout << "Number of created object is : " << Point::getCreatedObject() << endl;

	pP1 = new Point;
	pP2 = new Point(1, 2);

	pP1->setPoint(10, 20);
	*pP2 = *pP1 + *pP2;

	cout << "[X:" << pP1->getX() << "]" << "[Y:" << pP1->getY() << "]" << endl;
	//동적할당 한 변수는 (*pP1).getX() == pP1->getX()
	cout << *pP2 << endl;
	cout << "Number of created object is : " << Point::getCreatedObject() << endl;

	sp.printPoint(*pP1);
	sp.printPoint(*pP2);

	delete pP1;
	delete pP2;

}

/* // 제곱근 함수
class Point {
	int x;
	int y;
public:
	Point();
	Point(int _x, int _y);
	~Point();
	void setPoint(int x, int y);
	int getX();
	int getY();
	Point operator-(Point& point);
	Point operator*(Point& point);
	Point& operator=(Point& point);
};
Point::Point() :x(0), y(0) {}
Point::Point(int _x, int _y) : x(_x), y(_y) {};
Point::~Point() {};

void Point::setPoint(int x, int y) {
	this->x = x;
	this->y = y;
}
int Point::getX() {
	return this->x;
}
int Point::getY() {
	return this->y;
}
Point Point::operator-(Point& point) {
	Point result(this->x - point.getX(), this->y - point.getY());
	return result;
}
Point Point::operator*(Point& point) {
	Point result(this->x * point.getX(), this->y * point.getY());
	return result;
}
/*
Point& Point::operator=(Point& point) {
	this->x = point.getX();
	this->y = point.getY();
	return *this;
}

int main() {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	Point* pP1, * pP2, * pP3;
	cout << "첫번째 좌표[x1, y1]를 입력하세요 : ";
	cin >> x1 >> y1;
	cout << "두번째 좌표[x1, y1]를 입력하세요 : ";
	cin >> x2 >> y2;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);
	pP3 = new Point();

	*pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);

	cout << "두 좌표 사이의 길이는 "  << "입니다" << endl;;

	delete pP1, pP2, pP3;

	return 0;
}
*/