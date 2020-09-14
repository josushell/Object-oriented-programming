#include <iostream>
using namespace std;


class Student {
private:
	string name;
	int id;
	string department;
	int grade;
	int credit;
public:
	Student(string n = "default", unsigned int i = 0, string d = "default", int g = 0,
		int c = 0) :name(n), id(i), department(d), grade(g), credit(c) {};
	void Getter() {
		cout << "===========================" << endl;
		cout << "��    �� : " << name << endl;
		cout << "��    �� : " << id << endl;
		cout << "�Ҽ��а� : " << department << endl;
		cout << "��    �� : " << grade << endl;
		cout << "�̼����� : " << credit << endl;

	}
	void Setter(string _n, unsigned int i, string _d, int _g, int _c) {
		name = _n;
		id = i;
		department = _d;
		grade = _g;
		credit = _c;
		

	}
	virtual void print() {
		cout << "I'm student" << endl;
	}
};
class Graduate :public Student {
	bool bol;
	float f;
public:
	Graduate(string n, unsigned int i, string d, int g,int c, bool _bol, float _f) :Student(n, i, d, g, c), bol(_bol), f(_f) {};
	void print() override {
		string s;
		Getter();
		if (bol == 0) {
			s = "��������";
		}
		else
			s = "��������";

		cout << "�������� : " << s << endl;
		cout << "���к��� : " << f << endl;
		cout << "===========================" << "\n\n";
	}

};
class UnderGraduate :public Student {
	string circle;
public:
	UnderGraduate(string n, unsigned int i, string d, int g,int c, string cir) :Student(n, i, d, g, c), circle(cir) {};

	void print() override {
		Getter();
		cout << "���Ƹ��� : " << circle << endl;
		cout << "===========================" << "\n\n";

	}
};
int main() {
	Student Std;
	Graduate Kang("������", 2018311025, "��ǻ�Ͱ��а�", 1, 18, false, 0.5);
	UnderGraduate Hong("ȫ�浿", 20141111, "��ǻ�Ͱ��а�", 2, 80, "�˰��򵿾Ƹ�");

	Std.print();
	Kang.print();
	Hong.print();

	return 0;

}
