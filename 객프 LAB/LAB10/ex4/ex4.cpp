#include <iostream>
using namespace std;

int command() {
	int num;

	cout << "\n\t---- menu ----" << endl;
	cout << "\t1. 리스트 추가" << endl;
	cout << "\t2. 리스트 삭제" << endl;
	cout << "\t3. 리스트 출력" << endl;
	cout << "\t4. 프로그램 종료" << endl;
	cout << "\n\t입력 --> ";  cin >> num;

	return num;

}
template <typename T>
class CList {
public:
	CList() {
		m_Length = 0;
	}
	~CList() {}

	bool IsEmpty() {
		if (m_Length == 0)
			return true;
		else
			return false;

	}
	bool IsFull() {
		if (m_Length == 5)
			return true;
		else
			return false;
	}

	void Add(T data) {
		if (IsFull() == 1) {
			cout << "\n\tList is full\n";
		}
		else {
			bool b = true;

			for (int i = 0; i < m_Length; i++) {
				if (m_Array[i] == data) {
					cout << "\n\t중복된 데이터가 존재\n";
					b = false;
				}
			}

			if(b==1){
				m_Array[m_Length] = data;
				m_Length++;

				for (int i = 0; i < m_Length; i++) {
					for (int j = i + 1; j < m_Length; j++) {
						if (m_Array[i] > m_Array[j]) {
							int k = m_Array[i];
							m_Array[i] = m_Array[j];
							m_Array[j] = k;
						}
					}
				}
			}
			
		}
	}

	void Delete(T data) {
		if (IsEmpty() == 1) {
			cout << "\n\tList is empty.\n";
		}
		
		else {
			for (int i = 0; i < m_Length; i++) {

				if (m_Array[i] == data) {
					for (int j = i; j < m_Length; j++) {
						m_Array[j] = m_Array[j + 1];
					}
					m_Length--;
					break;
				}
			}
		}

	}
	void Print() {
		cout << "\n\n\t※ Current List\n\t";
		for (int i = 0; i < m_Length; i++) {
			cout << m_Array[i] << " ";
		}
		cout << endl;
	}

private:
	T m_Array[5];
	int m_Length;
};

int main() {

	CList<int> list;
	int input;
	int com;

	while (1) {
		com = command();

		switch (com) {
		case 1:
			cout << "\n추가할 데이터 : ";
			cin >> input;
			list.Add(input);
			break;
		case 2:
			cout << "\n삭제할 데이터 : ";
			cin >> input;
			list.Delete(input);
			break;
		case 3:
			list.Print();
			break;
		case 4:
			cout << "\n\t프로그램을 종료합니다\n";
			return 0;
			break;

		default:
			break;

		}
	}
	return 0;
}
