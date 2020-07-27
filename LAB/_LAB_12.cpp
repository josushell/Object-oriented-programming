#include <iostream>
#include <vector>
#include <ctime>
#include <string>
using namespace std;

// ex3

class Train {
public: 
	Train() {}  
	Train(int people) { 
		mPeople = people;
	}  
	~Train() {}  

virtual void station(int takeOff, int takeOn) {
	mPeople = mPeople + takeOn - takeOff;
}
protected:  
	int mPeople; 
}; 

class Ktx : public Train {
public:  
	Ktx() : Train(0) {} 
	Ktx(int people) :Train(people) {}  
	~Ktx() {}

	void station(int takeOff, int takeOn) override { 

		mPeople = mPeople + takeOn - takeOff;

		if (mPeople > 300) {
			cout << "정원초과입니다." << endl;
			exit(1);
		}
		else if (mPeople < 0) {
			cout << "정원미달입니다." << endl;
			exit(2);
		}
		
	}  
	int getPeople() { 
		return mPeople;
	}
}; 

int main() { 
	Ktx k; 
	static int max_people = 0;
	for (int i = 1; i <= 5; i++) {
		int in, out;
		cout << i << "번역 : ";
		cin >> out >> in;

		k.station(out, in);
		
		if (max_people <= k.getPeople()) {
			max_people = k.getPeople();
		}
	}
	cout << "가장 많은 사람이 탑승 했을 때의 사람 수 : " << max_people << endl;

	return 0; 
}


// ex4

class Avengers {
protected:
	string name;
	int attack_point;
	int defense_point;
	int health;
public:
	Avengers() {
		name = "";
		attack_point = 0;
		defense_point = 0;
		health = 0;
	}
	~Avengers() {}

	virtual void set(string _name, int _attack, int _defense, int _health) {}
	virtual int attack() { return 0; }
	virtual void print_info() { }
	virtual void defense(int _attack_point) { }

};

class Character :public Avengers {
public:
	Character(){}
	~Character() {}
	void set(string _name, int _attack, int _defense, int _health) override {

		name = _name;
		attack_point = _attack;
		defense_point = _defense;
		health = _health;
	}
	int attack() { 
		return attack_point;	
	}
	void defense(int _attack_point) { 
		health = health + defense_point - _attack_point;
	}
	void print_info() {
		cout << "Name : " << name << endl;
		cout << "Attack_Point : " << attack_point << endl;
		cout << "Defense_Point : " << defense_point << endl;
		cout << "Health : " << health << endl;

	}
	int get_health() { return health; }


};

int main() {
	Character my_char;
	Character enemy_char;
	string str;

	cout << "Choose your character(IronMan, CaptainAmerica, Thor): ";
	cin >> str;

	if (str == "IronMan") 
		my_char.set(str, 70, 40, 100);
	else if (str == "CaptainAmerica")
		my_char.set(str, 60, 50, 100);
	else
		my_char.set(str, 80, 30, 100);

	srand((unsigned int)time(NULL));
	int n = rand() % 3;

	if (n == 1) 
		enemy_char.set("IronMan", 70, 40, 100);
	else if (n == 0)
		enemy_char.set("CaptainAmerica", 60, 50, 100);
	else
		enemy_char.set("Thor", 80, 30, 100);

	cout << "--My Character--" << endl;
	my_char.print_info();

	cout << "--Enemy Character--" << endl;
	enemy_char.print_info();

	cout << endl << "--Battle--" << endl;  
	cout << "My Life: " << my_char.get_health() << "\t" << 
		"Enemy Life:" << enemy_char.get_health() << endl;

	int turn = 0;
	while (1) {
		if (turn % 2 == 0)
			enemy_char.defense(my_char.attack());
		else
			my_char.defense(enemy_char.attack());

		cout << "My Life: " << my_char.get_health() << "\t" <<
			"Enemy Life:" << enemy_char.get_health() << endl;
		if (my_char.get_health() <= 0) {
			cout << "You Lose!" << endl;
			break;
		}
		else if (enemy_char.get_health() <= 0) {
			cout << "You Win!" << endl;
			break;
		}
		turn++;

	}

}