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
		cout << "�й� : " << number << endl;
		cout << "�̸� : " << name << endl;
		cout << "���� : " << major << endl;
	}
};
int main() {
	CStudent s[3];
	int inputNumber;
	string inputName, inputMajor;
	int length = 0;

	while (1) {

		if (length == 3) {
			cout << "----��� �Է��� �Ϸ�Ǿ����ϴ�----" << endl;
			for (int i = 0; i < 3; i++) {
				cout << endl << i + 1 << "�л�����" << endl;
				s[i].Display();
			}
			break;
		}
		else {
			cout << length + 1 << " ��° �л� �Է�" << endl;
			cout << "�й� : ";
			cin >> inputNumber;
			cout << "�̸� : ";
			cin >> inputName;
			cout << "���� : ";
			cin >> inputMajor;

			bool boolyn = true;

			for (int i = 0; i < length; i++) {
				if (s[i].getNumber() == inputNumber) {
					cout << "�ߺ��� �й��� �����մϴ�." << "\n\n";
					boolyn = false;
					break;
				}
			}

			if (boolyn == 1) {
				cout << "�Է� �Ϸ�" << "\n\n";
				s[length].set_profile(inputNumber, inputName, inputMajor);
				length++;
			}



		}

	}

	return 0;
}