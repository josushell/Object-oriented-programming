#include <iostream>
#include <vector>
using namespace std;

class student {
private:
	string name;
	string major;
	int number;
	vector<string> strint;
	vector<char> grade;

public:
	student(string _name, int _number, string _major):name(_name), number(_number), major(_major){}
	student():name("default"), number(0), major("depart"){}

	void setName(string _name) {
		name = _name;
	}
	void setID(int _number) {
		number = _number;
	}
	void setdpt(string _major) {
		major = _major;
	}
	void print() {
		cout << name << " " << number << " " << major << endl;
	}
	void addGrade(string _string, char _grade) {
		strint.push_back(_string);
		grade.push_back(_grade);
	}
	void printGrades() {
		for (int i = 0; i < strint.size(); i++) {
			cout << strint[i] << " " << grade[i] << endl;
		}
		getGPA();
	}
	void getGPA() {
		int sum = 0;

		for (int i = 0; i < grade.size(); i++) {
			switch (grade[i]) {
			case 'A':
				sum = sum + 4;
				break;
			case 'B':
				sum = sum + 3;
				break;
			case 'C':
				sum += 2;
				break;
			case 'D':
				sum += 1;
				break;
			case 'F':
				sum += 0;
				break;
			}
		}
		float result = float(sum) / grade.size();
		cout << "GPA : " << result << endl;
	}

	void getYear(int _year) {
		int year = _year * 1000000;

		if (3000000 <= (year - number))
			cout << "About to graduate (5학년)" << endl;
		else if (2000000 < (year - number))
			cout << "Senior (4학년)" << endl;
		else if (1000000 < (year - number))
			cout << "Junior (3학년)" << endl;
		else if (0 < (year - number))
			cout << "Sophomore (2학년)" << endl;
		else
			cout << "Freshmen (1학년)" << endl;
	}
	
};

int main() {
	student Harry("Harry", 2017310973, "CS");
	Harry.print();
	Harry.getYear(2019);
	Harry.addGrade("programming", 'A');
	Harry.addGrade("Basic Circuit", 'B');
	Harry.printGrades();
	cout << "\n\n";

	student ron;
	ron.print();
	cout << "\n";
	ron.setName("Ron");
	ron.setID(2014103959);
	ron.setdpt("EE");
	ron.print();
	ron.getYear(2019);
	ron.addGrade("Computer Architecture", 'B');
	ron.addGrade("Machine Learning", 'B');
	ron.addGrade("Computer Vision", 'C');
	ron.printGrades();

	return 0;
}