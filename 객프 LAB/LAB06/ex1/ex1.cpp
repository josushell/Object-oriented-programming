#include <iostream>
using namespace std;

class CStudent {
	string name;
	string major;
	int number;
public:
	CStudent(int num, string name, string major):number(num), name(name), major(major){}
	CStudent():number(2018000000), name("홍길동"), major("컴퓨터공학과"){}

	void Display() {
		cout << "학번 : " << number << endl;
		cout << "이름 : " << name << endl;
		cout << "전공 : " << major << endl << endl;
	}
	void setNumber(int input_num) {
		number = input_num;
	}
	void setName(string input_name) {
		name = input_name;
	}
	void setMajor(string input_major) {
		major = input_major;
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
};

int main()
{
	CStudent s1;
	s1.Display();

	CStudent s2(1999000000, "공지철", "연극영화과");
	s2.Display();

	s1.setNumber(2006000000);
	s1.setName("민경훈");
	s1.setMajor("포스트모던");
	cout << "학번 :" << s1.getNumber() << endl;
	cout << "이름 :" << s1.getName() << endl;
	cout << "전공 :" << s1.getMajor() << endl;
	return 0;
}