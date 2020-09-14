#include <iostream>
#include <ctime>
#include <string> 

using namespace std;

void startGame(int input[], int answer[]) {
	int turn = 1;

	while(turn<=9) {
		cout << "==================== " << turn << " ====================" << endl;
		cout << "1 ~ 9 범위의 숫자 세개를 입력해주세요 : ";

		for (int i = 0; i < 3; i++) {
			cin >> input[i];
		}
		bool is_true = true;
		for (int i = 0; i < 3; i++) {
			if (input[i] >= 10 || input[i] <= 0) {
				cout << "1~9 범위 내의 숫자를 입력하여 주세요." << endl;
				is_true = false;
				break;
			}
			else {
				for (int j = i + 1; j < 3; j++) {
					if (input[i] == input[j]) {
						cout << "중복된 숫자를 입력하셨습니다." << endl;
						is_true = false;
						break;
					}
				}
			}
		}
		
		
		if (is_true == 1) {
			int len = 0;
			int strike = 0, ball = 0;

			for (int i = 0; i < 3; i++) {
				if (input[i] == answer[i]) {
					strike++;
				}
				for (int j = 0; j < 3; j++) {
					if (input[i] == answer[j]&&i!=j) {
						ball++;
					}
				}
			}

			if (strike == 0 && ball == 0) {
				cout << "Out!!" << endl;
				turn++;
			}
			else if(strike == 3) {

				cout<<endl << "정답입니다!" << endl;
				exit(2);
			}
			else {
				cout << strike << " Strike,  " << ball << " Ball" << endl << endl;
				turn++;
			}
			
		}

	}
	if (turn >= 10) {
		cout << " 패배했습니다." << endl;
		cout << "정답은 ";
		for (int i = 0; i < 3; i++) {
			cout << answer[i] << " ";
		}
		cout << " 입니다. " << endl;
		exit(1);
	}
}

int main() {

	int input[3];
	int answer[3];

	srand((unsigned int)time(NULL));

	for (int i = 0; i < 3; i++) {
		answer[i] = rand() % 9 + 1;
		for (int j = 0; j < i; j++) {
			if (answer[i] == answer[j] && i != j) {
				i--;
			}
		}
	}

	startGame(input, answer);


}