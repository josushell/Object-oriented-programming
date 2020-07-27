#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ex2
class CStudent {
	int number;
	string name;
	string major;
public:
	CStudent(int _num, string _name, string _major) :number(_num), name(_name), major(_major) {}
	CStudent() {};
	~CStudent() {}

	void set_profile(int _num, string _name, string _major) {
		number = _num;
		name = _name;
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
		cout << "학번 : " << number << endl;
		cout << "이름 : " << name << endl;
		cout << "전공 : " << major << endl;
	}
};
int main() {
	CStudent s[3];
	int inputNumber;
	string inputName, inputMajor;
	int length = 0;

	while (1) {

		if (length == 3) {
			cout << "----모든 입력이 완료되었습니다----" << endl;
			for (int i = 0; i < 3; i++) {
				cout << endl << i + 1 << "학생정보" << endl;
				s[i].Display();
			}
			break;
		}
		else {
			cout << length + 1 << " 번째 학생 입력" << endl;
			cout << "학번 : ";
			cin >> inputNumber;
			cout << "이름 : ";
			cin >> inputName;
			cout << "전공 : ";
			cin >> inputMajor;

			bool boolyn = true;

			for (int i = 0; i < length; i++) {
				if (s[i].getNumber() == inputNumber) {
					cout << "중복된 학번이 존재합니다." << "\n\n";
					boolyn = false;
					break;
				}
			}

			if (boolyn == 1) {
				cout << "입력 완료" << "\n\n";
				s[length].set_profile(inputNumber, inputName, inputMajor);
				length++;
			}



		}

	}

	return 0;
}