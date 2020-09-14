#include <iostream>
#include <cmath>
using namespace std;


class Polygon {
public:
	Polygon() :mPoint(0), mLength(0.0) {};
	Polygon(int point, float length) {
		this->mPoint = point;
		this->mLength = length;
	}
	~Polygon() {}
	virtual void calcGirth() {
		if (mLength == 0) {
			cout << "Girth : " << "empty " << endl;
		}
	}
	virtual void calcArea() {
		if (mLength == 0) {
			cout << "Area : " << "empty" << endl;
		}
	}

protected:
	int mPoint;
	double mLength;


};
class Rectangle :public Polygon {
public:
	Rectangle() {}
	Rectangle(int point, float length) :Polygon(point, length) {}
	~Rectangle() {};

	void calcGirth() override {
		auto result = Polygon::mPoint * Polygon::mLength;
		cout << "Girth : " << result << endl;
	}
	void calcArea() override {
		auto result = Polygon::mLength * Polygon::mLength;
		cout << "Area : " << result << endl;
	}
};
class Triangle : public Polygon {
public:
	Triangle(int point, int len) :Polygon(point, len) {}
	~Triangle() {}
	void calcGirth() override {
		auto result = Polygon::mPoint * Polygon::mLength;
		cout << "Girth : " << result << endl;
	}
	void calcArea() override {
		auto result = (sqrt(3) / 4) * Polygon::mLength * Polygon::mLength;
		cout << "Area : " << result << endl;
	}


};
class Circle : public Polygon {
public:
	Circle(int point, int len) :Polygon(point, len) {};
	~Circle() {};
	void calcGirth() override {
		auto result = 2 * (3.14) * Polygon::mLength;
		cout << "Girth : " << result << endl;
	}
	void calcArea() override {
		auto result = (3.14) * Polygon::mLength * Polygon::mLength;
		cout << "Area : " << result << endl;
	}

};
int main()
{
	Triangle tri(3, 10);
	Rectangle rec(4, 10);
	Circle cir(0, 5);

	cout << "--- Triangle class ---" << endl;
	tri.calcGirth();
	tri.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGirth();
	rec.calcArea();
	cout << "--- Circle class ---" << endl;
	cir.calcGirth();
	cir.calcArea();

	return 0;
}
