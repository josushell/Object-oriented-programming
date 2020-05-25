#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Unit {
protected:
	int type;
	string name;
	int price;
public:
	Unit():type(0),name(""),price(0) {};

	Unit(int _type, string _name, int _price) :type(_type), name(_name), price(_price) {}
	~Unit() {};

	virtual int action() = 0;
	virtual void print() = 0;

	int get_type() { return type; }
	string get_name() { return name; }
	int get_price() { return price; }


};
class Attacker:public Unit {
protected:
	int attack_point;
public:
	Attacker():attack_point(0) {}
	Attacker(int _type, string _name, int _price, int _attack_point) :
		Unit::Unit(_type, _name, _price), attack_point(_attack_point) {};
	~Attacker() {}
	
	int action() override { return attack_point; }
	void print() override {
		cout << "[Attacker] Name: " << Unit::name //get_name()
			<< "(Attack point:" << attack_point << ", price: " << Unit::price << ')' << endl; //get_price()
	}


};
class Miner : public Unit {
protected:
	int mining_point;
public:
	Miner():mining_point(0) {}
	Miner(int _type, string _name, int _price, int _mining_point) :
		Unit::Unit(_type, _name, _price), mining_point(_mining_point) {};
	~Miner() {}

	int action() override { return mining_point; }
	void print() override {
		cout << "[Miner] Name: " << Unit::name //get_name()
			<< "(Mining point:" << mining_point << ", price: " << Unit::price << ')' << endl;  //get_price()
	}


};
class ApplicationType {
private:
	vector<Unit*> unit_list_in_barracks;
	vector<Unit*> unit_list;
	int curr_turn;
	int MAX_turn;
	int gold;
	int enemy_hp;
	int flag_status;

public:
	ApplicationType();
	~ApplicationType();

	void increase_turn();
	void print_unit_list_in_barracks();
	void print_unit_list();

	void run();
	string get_command();
	bool hire_unit();
	void attack_to_enemy();
	void gather_money();
};
void ApplicationType::print_unit_list_in_barracks() {
	for (int i = 0; i < 4;i++) {
		unit_list_in_barracks[i]->print();
	}
	//for (Unit*& unit : unit_list_in_barracks)
	//	unit->print();
	
}
void ApplicationType::print_unit_list() {
	for (int i = 0; i < 4; i++) {
		unit_list[i]->print();
	}
}
void ApplicationType::attack_to_enemy() {
	for (Unit* unit:unit_list) {
		if ((unit->get_type()) == 1)
			enemy_hp = enemy_hp - unit->action();
	}
	increase_turn();

	if (enemy_hp <= 0) {
		flag_status = 2;
		cout << "You win" << endl;
	}
	
}
void ApplicationType::gather_money() {
	for (Unit* unit:unit_list) {
		if ((unit->get_type()) == 0)
			gold = gold + unit->action();
	}


	increase_turn();
	 
}
bool ApplicationType::hire_unit() {
	print_unit_list_in_barracks();
	cout << endl;

	string name;
	cout << endl << "Please enter the name: ";
	cin >> name;

	for (int i = 0; i < 4; i++) {
		if (unit_list_in_barracks[i]->get_name() == name) {
			if (unit_list_in_barracks[i]->get_price() <= gold) {
				if (unit_list_in_barracks[i]->get_type() == 0) {
					unit_list.push_back(new Miner(0, name, unit_list_in_barracks[i]->get_price(), unit_list_in_barracks[i]->action()));
				}
				else {
					unit_list.push_back(new Attacker(1, name, unit_list_in_barracks[i]->get_price(), unit_list_in_barracks[i]->action()));
				}
				gold -= unit_list_in_barracks[i]->get_price();
				cout << "Successfully hired!" << endl;
				increase_turn();
				return true;

			}
		}

	}
	cout << "Error: neither wrong name nor enough gold" << endl;
	return false;
}

 void ApplicationType::increase_turn() {
	 curr_turn += 1;  //curr_turn++;
	 if (curr_turn == MAX_turn) {
		 flag_status = 1;
		 cout << "You lose" << endl;
	 }
}
 string ApplicationType::get_command() {
	 string command;

	 cout << "Turn: "<<curr_turn<<"/ 50" << endl;
	 cout << "Gold: " << gold << endl;
	 cout << "Enemy HP: " << enemy_hp << endl << endl;

	 cout << "1. Hire Unit" << endl;
	 cout << "2. Attack to Enemy" << endl;
	 cout << "3. Gather Money" << endl;
	 cout << "4. Print Units" << endl;
	 cout << "input> ";

	 cin >> command;
	 return command;
	 

 }
ApplicationType:: ~ApplicationType() {
	 for (int i = 0; i < 4; i++) {
		 delete[] unit_list_in_barracks[i];
		 delete[] unit_list[i];
	 }

 }
ApplicationType::ApplicationType() {
	//unit*
	unit_list_in_barracks.push_back(new Attacker(1, "swordman", 300, 10));
	unit_list_in_barracks.push_back(new Attacker(1, "champion", 1200, 16));
	unit_list_in_barracks.push_back(new Miner(0, "farmer", 200, 20));
	unit_list_in_barracks.push_back(new Miner(0, "landlord", 500, 50));
		
	curr_turn = 1;
	MAX_turn = 50;
	gold = 1000;
	enemy_hp = 500;
	flag_status = 0;

}

void ApplicationType::ApplicationType::run() {
	string sOption;
	while (flag_status == 0) {
		sOption = get_command();
		if (sOption == "1") hire_unit();
		else if (sOption == "2") attack_to_enemy();
		else if (sOption == "3") gather_money();
		else if (sOption == "4") print_unit_list();
		else if (sOption == "5") break;
	}
	cout << "Exit the program..." << endl;
}
int main() {
	ApplicationType appType;
	appType.run();
	return 0;
}
