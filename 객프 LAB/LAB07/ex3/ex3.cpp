#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


class Account {
private:
	string name;
	string id;
	int balance;
public:
	Account(string _name, string _id, int _bal) :name(_name), id(_id), balance(_bal) {};
	~Account() {};

	int getBalance() {
		return balance;
	}
	string getName() {
		return name;
	}
	string getID() {
		return id;
	}
	
	void operator+(Account& acct) {
		balance = balance + acct.getBalance();
	}
	void operator-(Account& acct) {
		balance = balance-balance;
	}

};
ostream& operator<<(ostream& os, Account& pt) {
	os << "�й�: " << pt.getID() << ", �̸�: " << pt.getName() << ", �ܾ�: " << pt.getBalance() << endl;
	return os;

}
int main() {
	Account acnt[3] = {
	Account("������", "2014", 10000),
	Account("������", "2019", 0),
	Account("�̰�ȣ", "2013", 5000),
	};
	
	while (1) {
		string send_id, get_id;
	
		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> send_id;

		if (send_id == "����") {
			cout << "�����մϴ�" << endl;
			for (int i = 0; i < 3; i++) {
				cout << acnt[i] << endl;
			}
			exit(1);
		}
		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> get_id;
		
		if (get_id == send_id) {
			cout << "������ ����� �޴� ����� �й��� �ٸ��� �Է��ϼ���." << endl;
			continue;
		}

		if (send_id == "2014") {
			if (get_id == "2019") {
				if (acnt[0].getBalance()!=0) {
					acnt[1] + acnt[0];
					acnt[0] - acnt[1];


					cout << "���� �л��� �ܾ� => ";
					cout << acnt[0];

					cout << "���� �л��� �ܾ� => ";
					cout << acnt[1];
					continue;
				}
				else {
					cout << "�ܾ��� �����մϴ�." << endl;
					continue;
				}
			}
			else {
				if (acnt[0].getBalance() != 0) {
					acnt[2] + acnt[0];
					acnt[0] - acnt[2];


					cout << "���� �л��� �ܾ� => ";
					cout << acnt[0];

					cout << "���� �л��� �ܾ� => ";
					cout << acnt[2];
					continue;
				}
				else {
					cout << "�ܾ��� �����մϴ�." << endl;
					continue;
				}
			}
		}

		else if (send_id == "2019") {
			if (get_id == "2014") {
				if (acnt[1].getBalance() != 0) {
					acnt[0] + acnt[1];
					acnt[1] - acnt[0];

					cout << "���� �л��� �ܾ� => ";
					cout << acnt[1];

					cout << "���� �л��� �ܾ� => ";
					cout << acnt[0];

					continue;
				}
				else {
					cout << "�ܾ��� �����մϴ�."<< endl;
					continue;
				}
			}
			else {
				if (acnt[1].getBalance() != 0) {
					acnt[2] + acnt[1];
					acnt[1] - acnt[2];

					cout << "���� �л��� �ܾ� => ";
					cout << acnt[1];

					cout << "���� �л��� �ܾ� => ";
					cout << acnt[2];
					continue;
				}
				else {
					cout << "�ܾ��� �����մϴ�." << endl;
					continue;
				}
			}
		}
		else if (send_id == "2013") {
			if (get_id == "2014") {
				if (acnt[2].getBalance() != 0) {
					acnt[0] + acnt[2];
					acnt[2] - acnt[0];

					cout << "���� �л��� �ܾ� => ";
					cout << acnt[2];

					cout << "���� �л��� �ܾ� => ";
					cout << acnt[0];
				}
				else {
					cout << "�ܾ��� �����մϴ�." << endl;
					continue;
				}

			}
			else {
				if (acnt[2].getBalance() != 0) {
					acnt[1] + acnt[2];
					acnt[2] - acnt[1];

					cout << "���� �л��� �ܾ� => ";
					cout << acnt[2];

					cout << "���� �л��� �ܾ� => ";
					cout << acnt[1];
					continue;
				}
				else {
					cout << "�ܾ��� �����մϴ�." << endl;
					continue;
				}
			}
		}

		else {
			cout << "������ �л� �Ǵ� �޴� �л��� �й��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���" << endl;
			continue;
		}	
	}
}

/*
class Account {
private:
	string name;
	string id;
	int balance;
public:


	Account(string _name, string _id, int _balance) {
		name = _name;
		id = _id;
		balance = _balance;
	}
	void print() {
		cout << "�й�: " << id << ", �̸�: " << name << ", �ܾ�: " << balance;

	}
	int getBalance() { return balance; }

	void operator-(Account& ac) {
		if (this->balance > ac.getBalance())
			ac.balance = this->balance - ac.getBalance();
		else {
			ac.balance = ac.getBalance() - this->balance;
		}
	}

	void operator+(Account& ac) {
		this->balance = this->balance + ac.balance;
	}


};
ostream& operator<<(ostream& cout, Account& pt) {
	cout << pt;
	return cout;

}

void calculate(Account& acnt1, Account& acnt2) {
	cout << "���� �л��� �ܾ� : ";
	acnt1.print();
	cout << endl << "���� �л��� �ܾ�  :";
	acnt2.print();
}
void caculate_balance(Account& acnt1, Account& acnt2) {
	&acnt1 - &acnt2;
	acnt1 + acnt2;
	calculate(acnt1, acnt2);
}

int main() {
	Account acnt[3] = {
		Account("����ȣ","2014",10000),
		Account("������","2019",0),
		Account("������","2013",5000),

	};
	while (1) {
		string _name, give_id, take_id;
		int _balance;

		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> give_id;
		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> take_id;

		if (give_id == "2014") {
			if (take_id == "2019") {
				calculate(acnt[0], acnt[1]);
				caculate_balance(acnt[0], acnt[1]);
			}
			else {
				calculate(acnt[0], acnt[2]);
				caculate_balance(acnt[0], acnt[2]);
			}
		}
		else if (give_id == "2019") {
			if (take_id == "2014") {
				caculate_balance(acnt[1], acnt[0]);
			}
			else
				caculate_balance(acnt[1], acnt[2]);

		}
		else if (give_id == "����") {
			cout << "�����մϴ�." << '\n';
			cout << acnt[0] << endl;
			cout << acnt[1] << endl;
			cout << acnt[2] << endl;
			break;
		}
		else {
			cout << "������ �л� �Ǵ� �޴� �л��� �й��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���" << endl;
			break;
		}
	}
}
*/

