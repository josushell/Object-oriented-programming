#include<iostream>
#include<string>
using namespace std;
class User {
private:
	string id;
	string pw;
public:
	User() :id(""), pw("") {};

	void setID(string _id) {
		id = _id;
	}
	void setPW(string _pw) {
		pw = _pw;
	}

	string getID() {
		return id;
	}
	string getPW() {
		return pw;
	}


};
int main() {
	User user[3];
	string id, password, searchld, searchPassword;

	for (int i = 0; i < 3; i++) {
		cout << "============" << i + 1 << "============" << '\n';
		cout << "ID : ";
		cin >> id;
		user[i].setID(id);

		cout << "password : ";
		cin >> password;
		user[i].setPW(password);
		cout << "==========================" << "\n\n";

		if (i == 1) {
			if (user[0].getID() == user[1].getID()) {
				cout << "�̹� �����ϴ� ID�Դϴ�." << '\n';
				cout << "�����մϴ�.";
				exit(100);
			}
			if (i == 2) {
				if (user[0].getID() == user[2].getID() || user[1].getID() == user[2].getID()) {
					cout << "�̹� �����ϴ� ID�Դϴ�." << '\n';
					cout << "�����մϴ�.";
					exit(100);
				}
			}
		}




	}

	while (1) {


		while (1) {
			cout << "============  Login  ============" << "\n\n";
			cout << "ID : ";
			cin >> id;

			if (id == "����") {
				cout << "�����ϰڽ��ϴ�." << '\n';
				exit(100);
			}

			cout << "password : ";
			cin >> password;

			for (int i = 0; i < 3; i++) {
				if (!(user[i].getID() == id) || !(user[i].getPW() == password)) {
					cout << "�߸��� ID�ų� PASSWORD �Դϴ�." << '\n';
					cout << "========================" << "\n\n";
					break;

				}
				else {
					cout << "�α��� �Ǽ̽��ϴ�." << '\n';
					cout << "========================" << "\n\n";
					break;
				}
			}





		}
	}

}