#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void print_matrix(vector<vector<int>> *v, char ch);
void set_matrix(vector<vector<int>>* v, int col, int row);

int main() {
	int a_row, a_col;
	int b_row, b_col;
	
	cout << "A의 행, 열의 크기를 입력해주세요 : ";
	cin >> a_row >> a_col;
	cout << "B의 행, 열의 크기를 입력해주세요 : ";
	cin >> b_row >> b_col;

//	vector < vector<int>> vec1(a_row, vector<int>(a_col));
//	vector < vector<int>> vec2(b_row, vector<int>(b_col));
	vector<vector<int>> vec1;
	vector<vector<int>> vec2;
	

	set_matrix(&vec1, a_col, a_row);
	print_matrix(&vec1, 'A');
//	print_matrix(&vec2, 'B');
	return 0;
}

void set_matrix(vector<vector<int>>*v,int col, int row) {
//	vector<vector<int>>* v (row, vector<int>(col, 0));
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
//			(*v).at(i).at(j) = rand() % (19 + (-9));
			(*v).push_back(vector<int>(col, rand() % (19 + (-9))));
		}
	}

}

void print_matrix(vector<vector<int>>* v, char ch) {
	cout << ch << " 행렬 : " << endl;
	for (vector<int> elem1 : *v) {
		for (int elem2 : elem1) {
			cout << setw(4) << elem2;
		}
		cout << endl;
	}
}
