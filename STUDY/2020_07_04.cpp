#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

bool getstu(ifstream& stufile, int& stuid, int& exam1, int& exam2, int& final) {
	stufile >> stuid >> exam1 >> exam2 >> final;
	if (!stufile) {
		return false;
	}
	return true;
}
void calcGrade(int exam1, int exam2, int final, int& avg, char& grade) {
	avg = (exam1 + exam2 + final) / 3;

	if (avg >= 90)
		grade = 'A';
	else if (avg >= 80)
		grade = 'B';
	else if (avg >= 70)
		grade = 'C';
	else if (avg >= 60)
		grade = 'D';
	else
		grade = 'F';
}

void writeStu(ofstream& gradeFile, int stuid, int avg, int grade) {
	
	gradeFile.fill('0');
	gradeFile << setw(4) << stuid;
	gradeFile.fill(' ');
	gradeFile<<setw(3) << avg;
	gradeFile << ' ' << grade << endl;
}

int main() {

	ifstream stuFile;
	cout << "Start grading" << endl;
	stuFile.open("data.txt");
	if (!stuFile) {
		cout << "/aFile Error" << endl;
		exit(100);
	}
	ofstream gradeFile;
	gradeFile.open("Grade.txt");
	if (!gradeFile) {
		cout << "/aFile Error" << endl;
		exit(100);
	}

	int stuID;
	int exam1;
	int exam2;
	int final;
	int average;
	char grade;

	while (getstu(stuFile, stuID, exam1, exam2, final)) {
		calcGrade(exam1, exam2, final, average, grade);
		writeStu(gradeFile, stuID, average, grade);
	}

	stuFile.close();
	gradeFile.close();
	cout << "End grading" << endl;
	
	return 0;
}