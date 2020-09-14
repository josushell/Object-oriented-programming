#include <iostream>
using namespace std;

class CStudent {
	string name;
	string major;
	int number;
public:
	CStudent(int num, string name, string major) :number(num), name(name), major(major) {}
	CStudent() :number(2018000000), name("홍길동"), major("컴퓨터공학과") {}

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

int main() {
	CStudent s[3];
	int inputNumber;
	string inputName, inputMajor;
	int length = 0;

	while (1) {
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << " 번째 학생 입력" << endl;
			cout << "학번 : ";
			cin >> inputNumber;
			s[i].setNumber(inputNumber);

			cout << "이름 : ";
			cin >> inputName;
			s[i].setName(inputName);

			cout << "전공 : ";
			cin >> inputMajor;
			s[i].setMajor(inputMajor);

			for (int j = 0; j <= length; j++) {
				if (i == 0) {
					cout << "※입력 완료" << endl << endl;
					length++;
					break;
				}

				else if (i != j && s[i].getNumber() == s[j].getNumber()) {
					cout << "※중복된 학번이 존재합니다" << endl << endl;
					i--;
					break;
				}

				else {
					cout << "※입력 완료" << endl << endl;
					length++;
					break;

				}

					
				}

			}

			if (length == 3) {
				cout << endl << "----모든입력이 완료되었습니다----" << endl;
				for (int i = 0; i < 3; i++) {
					cout << i + 1 << "학생정보" << endl;
					s[i].Display();
				}
				exit(1);
			}
			
		
	}
}


