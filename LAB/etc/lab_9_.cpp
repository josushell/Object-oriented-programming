#include <iostream>
#include <string>
using namespace std;

//lab #10

/*���ʹ��� 1*/
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
/*���ʹ��� 2*/
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
	Account ac1("������", "1002", 10000);
	Account ac2;
	ac2.print();
	ac1.print();

	int depo;
	cout << "������ �ݾ��� �Է��ϼ��� : ";
	cin >> depo;
	ac1.deposit(depo);
	ac1.print();

	int wdrw;
	cout << "����� �ݾ��� �Է��ϼ��� : ";
	cin >> wdrw;
	if (!ac1.withdraw(wdrw))
		cout << "�ܾ��� �����մϴ�." << endl;

	ac1.print();
	return 0;
}
*/
/*���빮�� 1*/
class CStudent {
private:
	int number;
	string name;
	string major;
public:
	CStudent() :number(2019000000), name("ȫ�浿"), major("�濵�а�") {};
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
		cout << "�й� :" << number << '\n';
		cout << "�̸� :" << name << '\n';
		cout << "���� :" << major << '\n';
	}
};


int main() {
	CStudent s1;
	s1.Display();

	CStudent s2(2019123456, "������", "��ġ�ܱ��а�");
	s2.Display();

	s1.setNumber(2019123456);
	s1.setName("������");
	s1.setMajor("���ְ��а�");
	
	cout << "�й� :" << s1.getNumber() << endl;
	cout << "�̸� :" << s1.getName() << endl;
	cout << "���� :" << s1.getMajor() << endl;

	return 0;
}

/*���빮�� 2*/
int main() {
	CStudent s[3];
	int inputNumber;
	string inputName, inputMajor;
	int length = 0;

	while (1) {

	}

	return 0;
}






