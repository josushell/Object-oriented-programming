#include <iostream>
using namespace std;

class CStudent {
	string name;
	string major;
	int number;
public:
	CStudent(int num, string name, string major) :number(num), name(name), major(major) {}
	CStudent() :number(2018000000), name("ȫ�浿"), major("��ǻ�Ͱ��а�") {}

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

int main() {
	CStudent s[3];
	int inputNumber;
	string inputName, inputMajor;
	int length = 0;

	while (1) {
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << " ��° �л� �Է�" << endl;
			cout << "�й� : ";
			cin >> inputNumber;
			s[i].setNumber(inputNumber);

			cout << "�̸� : ";
			cin >> inputName;
			s[i].setName(inputName);

			cout << "���� : ";
			cin >> inputMajor;
			s[i].setMajor(inputMajor);

			for (int j = 0; j <= length; j++) {
				if (i == 0) {
					cout << "���Է� �Ϸ�" << endl << endl;
					length++;
					break;
				}

				else if (i != j && s[i].getNumber() == s[j].getNumber()) {
					cout << "���ߺ��� �й��� �����մϴ�" << endl << endl;
					i--;
					break;
				}

				else {
					cout << "���Է� �Ϸ�" << endl << endl;
					length++;
					break;

				}

					
				}

			}

			if (length == 3) {
				cout << endl << "----����Է��� �Ϸ�Ǿ����ϴ�----" << endl;
				for (int i = 0; i < 3; i++) {
					cout << i + 1 << "�л�����" << endl;
					s[i].Display();
				}
				exit(1);
			}
			
		
	}
}


