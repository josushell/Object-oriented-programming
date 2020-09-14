#include <iostream>
using namespace std;

class Train {
public:
	Train() :mPeople(0) {};
	Train(int people) {
		mPeople = people;
	}
	~Train() {};
	virtual int station(int takeoff, int takeon) {
		mPeople = mPeople - takeoff + takeon;
		return mPeople;
	}
protected:
	int mPeople;
};

class Ktx :public Train {
public:
	Ktx() :Train(0) {};
	Ktx(int people) :Train(people) {};
	~Ktx() {};
	static int max_people;

	int station(int takeoff, int takeon) override {
		Train::mPeople = Train::mPeople - takeoff + takeon;
		
		if (max_people <= Train::mPeople) {
			max_people = Train::mPeople;
		}
		return Train::mPeople;
	}
	int getPeople() {
		return max_people;
	}

};
int Ktx::max_people = 0;

int main() {
	Ktx k;
	int in, out;
	for (int i= 1; i <= 5; i++) {
		cout << i << "����: ";
		cin >> out >> in;
		
		int sum = k.station(out, in);

		if (sum> 300) {
			cout << "�����ʰ��Դϴ�" << endl;
			exit(1);
		}
		else if (sum< 0) {
			cout << "�����̴��Դϴ�" << endl;
			exit(2);
		}

	}

	cout << "���� ���� ����� ž�� ���� ���� ��� �� : " << k.getPeople() << endl;
	
		
	return 0;
}