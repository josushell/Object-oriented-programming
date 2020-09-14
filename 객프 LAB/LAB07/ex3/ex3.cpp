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
	os << "학번: " << pt.getID() << ", 이름: " << pt.getName() << ", 잔액: " << pt.getBalance() << endl;
	return os;

}
int main() {
	Account acnt[3] = {
	Account("신은섭", "2014", 10000),
	Account("김유민", "2019", 0),
	Account("이강호", "2013", 5000),
	};
	
	while (1) {
		string send_id, get_id;
	
		cout << "돈을 보낼 학생의 학번을 입력하세요: ";
		cin >> send_id;

		if (send_id == "종료") {
			cout << "종료합니다" << endl;
			for (int i = 0; i < 3; i++) {
				cout << acnt[i] << endl;
			}
			exit(1);
		}
		cout << "돈을 받을 학생의 학번을 입력하세요: ";
		cin >> get_id;
		
		if (get_id == send_id) {
			cout << "보내는 사람과 받는 사람의 학번을 다르게 입력하세요." << endl;
			continue;
		}

		if (send_id == "2014") {
			if (get_id == "2019") {
				if (acnt[0].getBalance()!=0) {
					acnt[1] + acnt[0];
					acnt[0] - acnt[1];


					cout << "보낸 학생의 잔액 => ";
					cout << acnt[0];

					cout << "받은 학생의 잔액 => ";
					cout << acnt[1];
					continue;
				}
				else {
					cout << "잔액이 부족합니다." << endl;
					continue;
				}
			}
			else {
				if (acnt[0].getBalance() != 0) {
					acnt[2] + acnt[0];
					acnt[0] - acnt[2];


					cout << "보낸 학생의 잔액 => ";
					cout << acnt[0];

					cout << "받은 학생의 잔액 => ";
					cout << acnt[2];
					continue;
				}
				else {
					cout << "잔액이 부족합니다." << endl;
					continue;
				}
			}
		}

		else if (send_id == "2019") {
			if (get_id == "2014") {
				if (acnt[1].getBalance() != 0) {
					acnt[0] + acnt[1];
					acnt[1] - acnt[0];

					cout << "보낸 학생의 잔액 => ";
					cout << acnt[1];

					cout << "받은 학생의 잔액 => ";
					cout << acnt[0];

					continue;
				}
				else {
					cout << "잔액이 부족합니다."<< endl;
					continue;
				}
			}
			else {
				if (acnt[1].getBalance() != 0) {
					acnt[2] + acnt[1];
					acnt[1] - acnt[2];

					cout << "보낸 학생의 잔액 => ";
					cout << acnt[1];

					cout << "받은 학생의 잔액 => ";
					cout << acnt[2];
					continue;
				}
				else {
					cout << "잔액이 부족합니다." << endl;
					continue;
				}
			}
		}
		else if (send_id == "2013") {
			if (get_id == "2014") {
				if (acnt[2].getBalance() != 0) {
					acnt[0] + acnt[2];
					acnt[2] - acnt[0];

					cout << "보낸 학생의 잔액 => ";
					cout << acnt[2];

					cout << "받은 학생의 잔액 => ";
					cout << acnt[0];
				}
				else {
					cout << "잔액이 부족합니다." << endl;
					continue;
				}

			}
			else {
				if (acnt[2].getBalance() != 0) {
					acnt[1] + acnt[2];
					acnt[2] - acnt[1];

					cout << "보낸 학생의 잔액 => ";
					cout << acnt[2];

					cout << "받은 학생의 잔액 => ";
					cout << acnt[1];
					continue;
				}
				else {
					cout << "잔액이 부족합니다." << endl;
					continue;
				}
			}
		}

		else {
			cout << "보내는 학생 또는 받는 학생의 학번이 존재하지 않습니다. 다시 입력해주세요" << endl;
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
		cout << "학번: " << id << ", 이름: " << name << ", 잔액: " << balance;

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
	cout << "보낸 학생의 잔액 : ";
	acnt1.print();
	cout << endl << "받은 학생의 잔액  :";
	acnt2.print();
}
void caculate_balance(Account& acnt1, Account& acnt2) {
	&acnt1 - &acnt2;
	acnt1 + acnt2;
	calculate(acnt1, acnt2);
}

int main() {
	Account acnt[3] = {
		Account("장윤호","2014",10000),
		Account("김유민","2019",0),
		Account("박진배","2013",5000),

	};
	while (1) {
		string _name, give_id, take_id;
		int _balance;

		cout << "돈을 보낼 학생의 학번을 입력하세요: ";
		cin >> give_id;
		cout << "돈을 받을 학생의 학번을 입력하세요: ";
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
		else if (give_id == "종료") {
			cout << "종료합니다." << '\n';
			cout << acnt[0] << endl;
			cout << acnt[1] << endl;
			cout << acnt[2] << endl;
			break;
		}
		else {
			cout << "보내는 학생 또는 받는 학생의 학번이 존재하지 않습니다. 다시 입력해주세요" << endl;
			break;
		}
	}
}
*/

