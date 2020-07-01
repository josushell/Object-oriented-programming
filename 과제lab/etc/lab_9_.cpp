#include <iostream>
#include <string>
using namespace std;

//lab #10

/*기초문제 1*/
/*
class Point {
private:
	int x;
	int y;

public:
	Point(int _x, int _y) :x(_x), y(_y) {};

	void setXY(int _x, int _y) {
		x = _x;
		y = _y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

	void print() {
		cout << x << ", " << y << endl;
	}
};

int main() {
	Point pt1(1, 2), pt2(3, 4);
	pt1.setXY(10, 20);
	pt1.print();
	pt2.print();

	cout << pt1.getX() << endl;
	cout << pt2.getY() << endl;

	return 0;
}
*/
/*기초문제 2*/
/*
class Account {
private:
	string name;
	string id;
	double balance;

public:
	Account() :name(""), id(""), balance(0) {};
	Account(string _name, string _id) :name(_name), id(_id), balance(0) {};
	Account(string _name, string _id, double _balance) {
		name = _name;
		id = _id;
		if (_balance < 0)
			balance = 0;
		else
			balance = _balance;
	} 
	void deposit(double _amt) { balance+=_amt; }
	bool withdraw(double _amt) {
		if (balance - _amt < 0)
			return false;
		balance -= _amt;
		return true;
	}
	void print() {
		cout << name << ", " << id << ", " << balance << endl;
	}

};

int main() {
	Account ac1("김태은", "1002", 10000);
	Account ac2;
	ac2.print();
	ac1.print();

	int depo;
	cout << "예금할 금액을 입력하세요 : ";
	cin >> depo;
	ac1.deposit(depo);
	ac1.print();

	int wdrw;
	cout << "출금할 금액을 입력하세요 : ";
	cin >> wdrw;
	if (!ac1.withdraw(wdrw))
		cout << "잔액이 부족합니다." << endl;

	ac1.print();
	return 0;
}
*/
/*응용문제 1*/
class CStudent {
private:
	int number;
	string name;
	string major;
public:
	CStudent() :number(2019000000), name("홍길동"), major("경영학과") {};
	CStudent(int _number, string _name, string _major) :
		number(_number), name(_name), major(_major) {};
	
	void setNumber(int num) {
		number = num;
	}
	void setName(string _name) {
		name = _name;
	}
	void setMajor(string _major) {
		major = _major;
	}
	int getNumber() {
		return number;
	}
	string getName() {
		return name;
	}
	string getMajor() {
		return major;
	}
	void Display() {
		cout << "학번 :" << number << '\n';
		cout << "이름 :" << name << '\n';
		cout << "전공 :" << major << '\n';
	}
};


int main() {
	CStudent s1;
	s1.Display();

	CStudent s2(2019123456, "김태은", "정치외교학과");
	s2.Display();

	s1.setNumber(2019123456);
	s1.setName("조수연");
	s1.setMajor("우주과학과");
	
	cout << "학번 :" << s1.getNumber() << endl;
	cout << "이름 :" << s1.getName() << endl;
	cout << "전공 :" << s1.getMajor() << endl;

	return 0;
}

/*응용문제 2*/
int main() {
	CStudent s[3];
	int inputNumber;
	string inputName, inputMajor;
	int length = 0;

	while (1) {

	}

	return 0;
}






