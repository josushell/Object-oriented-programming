#include <iostream>
#include <cmath>
using namespace std;

// ex1
/*
class Point {
private:
	int x;
	int y;
	static int numCreatedObjects;
	// ifstream fin or int *ary
public:
	Point() :x(0), y(0) {
		numCreatedObjects++;
		// fin.open() or ary=new int [100]
	}
	~Point() {
		cout << "Destructed" << endl;
		//fin.close() or delete[] ary
	}
	Point(int x, int y);
	static int getnumcreatedobjects() {
		return numCreatedObjects;
	}
	void setXY(int _x, int _y) {
		this->x = _x;
		this->y = _y;
	}
	int getX()const;
	int getY() const;

	Point& operator=(Point& pt) {
		x = pt.getX();
		y = pt.getY();
	}
	Point operator+(Point& pt2) {
		Point result(this->x + pt2.getX(), this->y + pt2.getY());
		return result;
	}
	friend ostream& operator<<(ostream& cout, Point& pt);
	friend void print(const Point& pt);
	friend class spyPoint;
};
int Point::numCreatedObjects = 0;
Point::Point(int _x, int _y) :x(_x), y(_y) {
	numCreatedObjects++;
}
int Point::getX() const { return x; }
int Point::getY() const { return y; }

void print(const Point& pt) {
	cout << pt.x << ", " << pt.y << endl << endl;
}
ostream& operator<<(ostream& cout, Point& pt) {
	cout << pt.getX() << ", " << pt.getY() << endl;
	return cout;
}
class spyPoint {
public:
	void hack_all_info(Point &pt) {
		cout << "Hacked by spyPoint" << endl;
		cout << "x: " << pt.getX() << endl;
		cout << "y: " << pt.getY() << endl;
		cout << "numCreatedObje.: " << pt.getnumcreatedobjects() << endl;
	}
};
int main() {
	Point pt1(1, 2);
	cout << "pt1 : ";
	print(pt1);

	Point* pPt1 = &pt1;
	cout << "pt1 : ";
	print(*pPt1);

	cout <<"pt1 : ";
	cout << "更走? " << endl;

	Point* pPt2 = new Point(10, 20);
	cout << "pt2 : ";
	print(*pPt2);
	delete pPt2;

	int a = 3 + 5;
	Point pt2(10, 20), pt3(30, 40);

	Point pt4 = pt2 + pt3;

	cout << "pt2 : " << pt2 << endl;
	cout << "pt3 : " << pt3 << endl;
	cout << "pt4 : " << pt4 << endl;

	cout << "pt1 NumCreatedObject : " << pt1.getnumcreatedobjects() << endl << endl;

	Point* ptAry = new Point[5];
	cout << "pt2 NumCreatedObject : " << pt2.getnumcreatedobjects() << endl << endl;
	delete[] ptAry;

	spyPoint spy;
	cout << endl << "pt1 info" << endl;
	spy.hack_all_info(pt1);
	cout << "pt4 info" << endl;
	spy.hack_all_info(pt4);

	return 0;
}
*/

// 誓遂

// ex1 陥獣  ぞぞ 失因


class User {
private:
	string id;
	string pw;
public:
	User(string _id, string _pw) :id(_id), pw(_pw) {};
	User() {};
	~User() {};

	void set_profile(string _id, string _pw) {
		id = _id;
		pw = _pw;
	}
	string get_id() {
		return id;
	}
	string get_pw() {
		return pw;
	}



};
int main() {
	User user[3];
	string id, password, searchid, searchpassword;

	for (int i = 0; i < 3; i++) {
		cout << "===========" << i + 1 << "============" << endl;
		cout << "ID : ";
		cin >> id;

		for (auto t : user) {
			if (t.get_id() == id) {
				cout << "戚耕 糎仙馬澗 ID脊艦陥." << endl;
				cout << "曽戟杯艦陥." << endl;
				exit(1);
			}
		}

		cout << "password : ";
		cin >> password;
		cout << "===========================" << "\n\n";

		user[i].set_profile(id, password);
	}

	while (1) {
		cout << "============== Login ===============" << "\n\n";
		cout << "ID : ";
		cin >> searchid;

		if (searchid == "曽戟") {
			cout << "曽戟馬畏柔艦陥.";
			exit(2);
		}

		cout << "Password : ";
		cin >> searchpassword;
		
		bool login_sucess = false;

		
		for (int i = 0; i < 3; i++) {
			if (user[i].get_id() == searchid && user[i].get_pw() == searchpassword) {
				login_sucess = true;
				break;
			}
		}				
		if (login_sucess == 1) {
			cout << "稽益昔 鞠醸柔艦陥. " << endl;
		}
		else {
			cout << "設公吉 ID暗蟹 PASSWORD脊艦陥. " << endl;
		}
		

	}
}


// ex2
/*
class Point {
private:
	int x;
	int y;
public:
	Point() :x(0), y(0) {};
	Point(int _x, int _y) :x(_x), y(_y) {};
	~Point() {};

	int getx() { return x; }
	int gety() { return y; }

	void setPoint(int _x, int _y) {
		x = _x;
		y = _y;
	}

	Point operator-(Point& pt) {
		Point result(x - pt.getx(), y - pt.gety());
		return result;
	}
	Point operator*(Point pt) {
		Point result(x * pt.getx(), y * pt.gety());
		return result;
	}

};
int main() {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	Point* pP1, * pP2, * pP3;

	cout << "湛腰属 疎妊 (x1, y1)聖 脊径馬室推 : ";
	cin >> x1 >> y1;

	cout << "砧腰属 疎妊 (x1, y1)聖 脊径馬室推 : ";
	cin >> x2 >> y2;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);
	pP3 = new Point();

	*pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);

	auto result = sqrt(pP3->getx() + pP3->gety());
	cout << "砧 疎妊 紫戚税 掩戚澗 " << result<< "脊艦陥. " << endl;

	return 0;
}
/*
	Point& operator=(Point& pt) {
		this->x = pt.getx();
		this->y = pt.gety();
		return *this;
	}
*/

// ex3  ぞぞ 失因 ぞぞ

/*
class Account {
private:
	string name;
	string id;
	int balance;
public:
	Account(string _name, string _id, int bal) {
		name = _name;
		id = _id;
		balance = bal;
	}
	Account() {}
	~Account() {};

	string getid() { return id; }
	string getname() { return name; }
	int getbalance() { return balance; }

	void operator+(Account& acct) {
		balance = balance + acct.getbalance();
	}
	void operator-(Account& acct) {
		balance = 0;
	}
};
ostream& operator<<(ostream& cout, Account& acct) {
	cout << "俳腰: " << acct.getid() << ",  戚硯: " << acct.getname() << ",  接衝: "
		<< acct.getbalance();
	return cout;
}

int main() {
	Account acnt[3] = {
		Account("舌星硲", "2014", 10000),
		Account("沿政肯", "2019", 0),
		Account("酵遭壕", "2013", 5000),
	};

	string send_id, get_id;
	while(1) {
		cout << "儀聖 左馨 俳持税 俳腰聖 脊径馬室推 : ";
		cin >> send_id;

		if (send_id == "曽戟") {
			cout << "曽戟杯艦陥." << endl;
			for (int i = 0; i < 3; i++) {
				cout << acnt[i] << endl;
			}
			exit(1);
		}

		cout << "儀聖 閤澗 俳持税 俳腰聖 脊径馬室推 : ";
		cin >> get_id;

		int is_give_there = 0;
		int is_take_there = 0;

		for (int i = 0; i < 3; i++) {
			if (acnt[i].getid() == send_id) {
				is_give_there = 1;
			}
			if (acnt[i].getid() == get_id) {
				is_take_there = 1;
			}
		}
		int give, take;

		if (is_give_there == 1 && is_take_there == 1) {
			for (int i = 0; i < 3; i++) {
				if (acnt[i].getid() == send_id) {
					give = i;
				}
				if (acnt[i].getid() == get_id) {
					take = i;
				}
			}
			if (take == give) {
				cout << "左鎧澗 俳持引 閤澗 俳持税 俳腰聖 陥牽惟 脊径馬室推." << endl;
				continue;
			}
			if (acnt[give].getbalance() <= 0) {
				cout << "左鎧澗 俳持税 接衝戚 採膳杯艦陥." << endl;
				continue;
			}

			else {

				acnt[take] + acnt[give];
				acnt[give] - acnt[take];

				cout << "左浬 俳持税 接衝 => ";
				cout << acnt[give] << endl;
				cout << "閤精 俳持税 接衝 => ";
				cout << acnt[take] << endl;

				continue;
			}
		}
		else  {
			cout << "左鎧澗 俳持 暁澗 閤澗 俳持税 俳腰戚 糎仙馬走 省柔艦陥. 陥獣 脊径背爽室推" << endl;
			continue;
		}
	}
}
*/

// ex4  ぞぞぞ 掻差 伊紫猿走 失因~ぞぞぞ

/*
class Account {
private:
	string name;
	string id;
	int balance;
	static int sumofbalance;
public:
	Account() {};
	~Account() {
		sumofbalance += balance;
	}
	void set_profile(string _id, string _name, int bal) {
		id = _id;
		name = _name;
		balance = bal;
	}
	string get_id() {
		return id;
	}
	int get_sumofbalance() {
		return sumofbalance;
	}
};
int Account::sumofbalance = 0;
int main() {
	int n;
	cout << "恥 俳持 呪 脊径: ";
	cin >> n;

	Account* act;
	act = new Account[n];

	string id, name;
	int balance;
	int length = 0;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "腰属 俳持 域疎 脊径" << endl;
		cout << "俳腰 : ";
		cin >> id;
		cout << "戚硯 : ";
		cin >> name;
		cout << "接衝 : ";
		cin >> balance;
		cout << "======================" << endl << endl;

		for (int i = 0; i <length; i++) {
			if (act[i].get_id() == id) {
				cout << "俳腰戚 掻差鞠醸柔艦陥. 曽戟杯艦陥." << endl;
				exit(2);
			}

		}

		act[i].set_profile(id, name, balance);
		length++;

	}
	delete[] act;

	cout << "噺呪吉 榎衝 : " << act->get_sumofbalance() << endl;

}
*/