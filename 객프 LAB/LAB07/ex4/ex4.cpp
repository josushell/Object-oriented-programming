#include<iostream>
#include<string>
using namespace std;


class Account {
private:
	string id;
	string name;
	int balance;
	static int leftbalance;


public:
	Account() {
		id = "";
		name = "";
		balance = 0;
	}

	~Account() {

	}

	void setAccount(string _id, string _name, int _balance) {
		id = _id;
		name = _name;
		balance = _balance;

	}

	void take_balance(Account& _ac) {
		leftbalance += _ac.balance;


	}
	int* get_leftbalance() {
		return &leftbalance;
	}


};
int Account::leftbalance = 0;

int main() {
	int num, _balance;
	string _id, _name;
	cout << "총 학생 수 입력: ";
	cin >> num;

	Account* ac = new Account[num];

	for (int j = 0; j < num; j++) {

		cout << j + 1 << "번째 학생 계좌 입력 : " << '\n';
		cout << "학번: ";
		cin >> _id;
		cout << "이름: ";
		cin >> _name;
		cout << "잔액: ";
		cin >> _balance;
		cout << "===========================\n\n";

		ac[j].setAccount(_id, _name, _balance);
		ac[j].take_balance(ac[j]);


	}

	cout << "회수된 금액 : " << *ac->get_leftbalance();
	delete[] ac;

	return 0;
}
