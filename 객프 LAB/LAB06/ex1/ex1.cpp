#include <iostream>
using namespace std;

class CStudent {
	string name;
	string major;
	int number;
public:
	CStudent(int num, string name, string major):number(num), name(name), major(major){}
	CStudent():number(2018000000), name("ȫ�浿"), major("��ǻ�Ͱ��а�"){}

	void Display() {
		cout << "�й� : " << number << endl;
		cout << "�̸� : " << name << endl;
		cout << "���� : " << major << endl << endl;
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

	CStudent s2(1999000000, "����ö", "���ؿ�ȭ��");
	s2.Display();

	s1.setNumber(2006000000);
	s1.setName("�ΰ���");
	s1.setMajor("����Ʈ���");
	cout << "�й� :" << s1.getNumber() << endl;
	cout << "�̸� :" << s1.getName() << endl;
	cout << "���� :" << s1.getMajor() << endl;
	return 0;
}