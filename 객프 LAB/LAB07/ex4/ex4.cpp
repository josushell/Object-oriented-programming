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
	cout << "�� �л� �� �Է�: ";
	cin >> num;

	Account* ac = new Account[num];

	for (int j = 0; j < num; j++) {

		cout << j + 1 << "��° �л� ���� �Է� : " << '\n';
		cout << "�й�: ";
		cin >> _id;
		cout << "�̸�: ";
		cin >> _name;
		cout << "�ܾ�: ";
		cin >> _balance;
		cout << "===========================\n\n";

		ac[j].setAccount(_id, _name, _balance);
		ac[j].take_balance(ac[j]);


	}

	cout << "ȸ���� �ݾ� : " << *ac->get_leftbalance();
	delete[] ac;

	return 0;
}
