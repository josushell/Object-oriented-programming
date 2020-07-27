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
	cout << "뭐지? " << endl;

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

// 응용

// ex1 다시  ㅎㅎ 성공


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
				cout << "이미 존재하는 ID입니다." << endl;
				cout << "종료합니다." << endl;
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

		if (searchid == "종료") {
			cout << "종료하겠습니다.";
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
			cout << "로그인 되었습니다. " << endl;
		}
		else {
			cout << "잘못된 ID거나 PASSWORD입니다. " << endl;
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

	cout << "첫번째 좌표 (x1, y1)을 입력하세요 : ";
	cin >> x1 >> y1;

	cout << "두번째 좌표 (x1, y1)을 입력하세요 : ";
	cin >> x2 >> y2;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);
	pP3 = new Point();

	*pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);

	auto result = sqrt(pP3->getx() + pP3->gety());
	cout << "두 좌표 사이의 길이는 " << result<< "입니다. " << endl;

	return 0;
}
/*
	Point& operator=(Point& pt) {
		this->x = pt.getx();
		this->y = pt.gety();
		return *this;
	}
*/

// ex3  ㅎㅎ 성공 ㅎㅎ

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
	cout << "학번: " << acct.getid() << ",  이름: " << acct.getname() << ",  잔액: "
		<< acct.getbalance();
	return cout;
}

int main() {
	Account acnt[3] = {
		Account("장윤호", "2014", 10000),
		Account("김유민", "2019", 0),
		Account("박진배", "2013", 5000),
	};

	string send_id, get_id;
	while(1) {
		cout << "돈을 보낼 학생의 학번을 입력하세요 : ";
		cin >> send_id;

		if (send_id == "종료") {
			cout << "종료합니다." << endl;
			for (int i = 0; i < 3; i++) {
				cout << acnt[i] << endl;
			}
			exit(1);
		}

		cout << "돈을 받는 학생의 학번을 입력하세요 : ";
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
				cout << "보내는 학생과 받는 학생의 학번을 다르게 입력하세요." << endl;
				continue;
			}
			if (acnt[give].getbalance() <= 0) {
				cout << "보내는 학생의 잔액이 부족합니다." << endl;
				continue;
			}

			else {

				acnt[take] + acnt[give];
				acnt[give] - acnt[take];

				cout << "보낸 학생의 잔액 => ";
				cout << acnt[give] << endl;
				cout << "받은 학생의 잔액 => ";
				cout << acnt[take] << endl;

				continue;
			}
		}
		else  {
			cout << "보내는 학생 또는 받는 학생의 학번이 존재하지 않습니다. 다시 입력해주세요" << endl;
			continue;
		}
	}
}
*/

// ex4  ㅎㅎㅎ 중복 검사까지 성공~ㅎㅎㅎ

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
	cout << "총 학생 수 입력: ";
	cin >> n;

	Account* act;
	act = new Account[n];

	string id, name;
	int balance;
	int length = 0;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 학생 계좌 입력" << endl;
		cout << "학번 : ";
		cin >> id;
		cout << "이름 : ";
		cin >> name;
		cout << "잔액 : ";
		cin >> balance;
		cout << "======================" << endl << endl;

		for (int i = 0; i <length; i++) {
			if (act[i].get_id() == id) {
				cout << "학번이 중복되었습니다. 종료합니다." << endl;
				exit(2);
			}

		}

		act[i].set_profile(id, name, balance);
		length++;

	}
	delete[] act;

	cout << "회수된 금액 : " << act->get_sumofbalance() << endl;

}
*/