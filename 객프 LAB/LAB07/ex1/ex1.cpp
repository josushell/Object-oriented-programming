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
				cout << "이미 존재하는 ID입니다." << '\n';
				cout << "종료합니다.";
				exit(100);
			}
			if (i == 2) {
				if (user[0].getID() == user[2].getID() || user[1].getID() == user[2].getID()) {
					cout << "이미 존재하는 ID입니다." << '\n';
					cout << "종료합니다.";
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

			if (id == "종료") {
				cout << "종료하겠습니다." << '\n';
				exit(100);
			}

			cout << "password : ";
			cin >> password;

			for (int i = 0; i < 3; i++) {
				if (!(user[i].getID() == id) || !(user[i].getPW() == password)) {
					cout << "잘못된 ID거나 PASSWORD 입니다." << '\n';
					cout << "========================" << "\n\n";
					break;

				}
				else {
					cout << "로그인 되셨습니다." << '\n';
					cout << "========================" << "\n\n";
					break;
				}
			}





		}
	}

}