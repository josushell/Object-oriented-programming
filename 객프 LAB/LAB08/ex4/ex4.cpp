#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Avengers
{
public:
	Avengers() {
		name = "";
		attack_point = 0;
		defense_point = 0;
		health = 0;
	}
	~Avengers() {}
	//캐릭터 설정 함수
	virtual void set(string _name, int _attack, int _defense, int _health) {}

	//공격 함수
	virtual	int attack() {
		return 0;
	}
	//방어 함수
	virtual	void defense(int _attack_point) {}

	//캐릭터 정보 출력 함수
	virtual void print_info() {}

protected:
	string name;//캐릭터 이름
	int attack_point;//공격력
	int defense_point;//방어력
	int health;//체력
};

class Character : public Avengers {
public:
	Character():Avengers() {};
	~Character() {};

	void set(string _name, int _attack, int _defense, int _health) override {
		Avengers::name = _name;
		Avengers::attack_point = _attack;
		Avengers::defense_point = _defense;
		Avengers::health = _health;
	}
	int attack() override {
		return Avengers::attack_point;
	}
	void defense(int _attack_point) override {
		Avengers::health = Avengers::health + Avengers::defense_point - _attack_point;

	}
	void print_info() override {
		cout << "Name: " << Avengers::name << endl;
		cout << "Attack_Point : " << Avengers::attack_point << endl;
		cout << "Defense_Point : " << Avengers::defense_point << endl;
		cout << "Health : " << Avengers::health << endl;

	}
	int get_health() { return health; }
};

int main()
{
	Character my_char;
	Character enemy_char;
	string ch;

	cout << "Choose your character(IronMan, CaptainAmerica, Thor) : ";
	cin >> ch;

	if (ch == "IronMan") {
		my_char.set(ch, 70, 40, 100);
	}
	else if (ch == "CaptainAmerica") {
		my_char.set(ch, 60, 50, 100);
	}
	else if (ch == "Thor") {
		my_char.set(ch, 80, 30, 100);
	}
	cout << "--My Character--" << endl;
	my_char.print_info();


	srand((unsigned int)time(0));
	int n = rand() % 3;

	if (n == 0) {
		enemy_char.set("IronMan", 70, 40, 100); //ironman
	}
	if (n == 1) {
		enemy_char.set("CaptainAmerica", 60, 50, 100); //captainamerica
	}
	if (n == 2) {
		enemy_char.set("Thor", 80, 30, 100); //thor
	}

	cout << "--Enemy Character--" << endl;
	enemy_char.print_info();


	cout << endl << "--Battle--" << endl;
	cout << "My Life: " << my_char.get_health() << "\t"
		<< "Enemy Life:" << enemy_char.get_health() << endl;


	int count = 1;
	while (1) {
		if (count % 2 == 1)
			enemy_char.defense(my_char.attack());
		else
			my_char.defense(enemy_char.attack());


		cout << "My Life: " << my_char.get_health() << "\t"
			<< "Enemy Life: " << enemy_char.get_health() << endl;


		if (my_char.get_health() <= 0) {
			cout << "You Lose!";
			break;
		}
		else if (enemy_char.get_health() <= 0) {
			cout << "You Win!";
			break;
		}
		count += 1;
	}

	return 0;
}
