#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* 계좌 class

class Account {
public:

	string name;
	int id;
	double balance;
};
	void add_account(vector<Account>& accts) {
		string name;
		int number;
		double amount;

		cout << "Enter name, account number, account balance : ";
		cin >> name >> number >> amount;
		Account acct;
		acct.name = name;
		acct.id = number;
		acct.balance = amount;
		accts.push_back(acct);
	}

	void print_accounts(const vector<Account>& accts) {
		int n = accts.size();
		for (int i = 0; i < n; i++) {
			cout << accts[i].name << ", " << accts[i].id << ", " << accts[i].balance << endl;
		}
	}
	void swap(Account& er1, Account& er2) {
		Account temp = er1;
		er1 = er2;
		er2 = temp;
	}
	bool less_than_by_name(const Account& e1, const Account& e2) {
		return e1.name < e2.name;
	}
	bool less_than_by_id(const Account& e1, const Account& e2) {
		return e1.id < e2.id;
	}
	bool less_than_by_balance(const Account& e1, const Account& e2) {
		return e1.balance < e2.balance;
	}
	void sort(vector<Account>& db, bool (*comp)(const Account&, const Account&)) {
		int size =  db.size();
		for (int i = 0; i < size; i++) {
			int smallest = i;
			for (int j = i + 1; j < size; j++) {
				if (comp(db[j], db[smallest])) {
					smallest = j;
				}
			}
			if (smallest != i) {
				swap(db[i], db[smallest]);
			}
		}
	}


int main() {
	vector<Account> customers;
	char cmd;
	bool done= false;

	do {
		cout << "[A]dd [N]ame [I]D [B]alance [Q]uit==> ";
		cin >> cmd;

		switch (cmd) {
		case 'A':
		case 'a':
			add_account(customers);
			break;
		case 'P':
		case 'p':
			print_accounts(customers);
			break;
		case 'N':
		case 'n':
			sort(customers, less_than_by_name);
			print_accounts(customers);
			break;
		case 'I':
		case 'i':
			sort(customers, less_than_by_id);
			print_accounts(customers);
			break;
		case 'B':
		case 'b':
			sort(customers, less_than_by_balance);
			print_accounts(customers);
			break;
		case 'Q':
		case 'q':
			done = true;
			break;

		}
	} while (!done);

	return 0;
}
*/

/* 생성자 초기화를 포함하는 유리수 계산 함수
#include <cstdlib>
class SimpleRational {
	int numerator;
	int denominator;
public:
	SimpleRational(int n, int d) :numerator(n), denominator(d) {
		if (d == 0) {
			cout << "zero denominator error" << endl;
			exit(1);
		}
	}
	SimpleRational() :numerator(0), denominator(1) {};

	void set_numerator(int n) {
		numerator = n;
	}
	void set_denominator(int d) {
		if (d == 0) {
			cout << "zero denominator error" << endl;
			exit(1);
		}
		else
			denominator = d;
	}
	int get_numerator() {
		return numerator;
	}
	int get_denominator() {
		return denominator;
	}
};
SimpleRational multiply(SimpleRational r1, SimpleRational r2) {
	return{ r1.get_numerator() * r2.get_numerator(), r1.get_denominator() * r2.get_denominator() };
}
void print_fraction(SimpleRational f) {
	cout << f.get_numerator() << "/" << f.get_denominator() << endl;
}
int main() {
	SimpleRational frac(1, 2);
	cout<<"The fraction is ";
	print_fraction(frac);
	cout << endl;
	frac.set_numerator(19);
	frac.set_denominator(4);
	cout << "The fraction now is ";
	print_fraction(frac);
	cout << endl;

	SimpleRational frac1{ 1,2 }, frac2{ 2,3 };
	auto prod = multiply(frac1, frac2);
	cout << "The product of ";
	print_fraction(frac1);
	cout << " and ";
	print_fraction(frac2);
	cout << " is ";
	print_fraction(prod);
	cout << endl;
}
*/