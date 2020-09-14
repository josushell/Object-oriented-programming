#include <iostream>
using namespace std;

class Polygon {
public:
	Polygon() :mPoint(0), mLength(0.0) {};
	Polygon(int point, float length) {
		this->mPoint = point;
		this->mLength= length;
	}
	~Polygon() {}
	virtual void calcGirth() {
		if (mPoint == 0 || mLength == 0) {
			cout << "Girth : " << "empty "<< endl;
		}
	}
	virtual void calcArea() {
		if (mPoint == 0 || mLength == 0) {
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
	Rectangle(int point, float length) :Polygon(point, length) {
		Polygon::mPoint=point;
		Polygon::mLength = length;
	}
	~Rectangle() {};

	void calcGirth() override {
		auto result= Polygon::mPoint* Polygon::mLength;
		cout << "Girth : " << result << endl;
	}
	void calcArea() override {
		auto result = Polygon::mLength * Polygon::mLength;
		cout << "Area : " << result << endl;
	}
};
int main() {
	Polygon pol;
	Rectangle rec(4, 10);

	cout << "--- Polygon class ---" << endl;
	pol.calcGirth();
	pol.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGirth();
	rec.calcArea();

	return 0;
}
