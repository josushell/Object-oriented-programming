#include <iostream>
using namespace std;

int command() {
	int num;

	cout << "\n\t---- menu ----" << endl;
	cout << "\t1. ����Ʈ �߰�" << endl;
	cout << "\t2. ����Ʈ ����" << endl;
	cout << "\t3. ����Ʈ ���" << endl;
	cout << "\t4. ���α׷� ����" << endl;
	cout << "\n\t�Է� --> ";  cin >> num;

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
					cout << "\n\t�ߺ��� �����Ͱ� ����\n";
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
		cout << "\n\n\t�� Current List\n\t";
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
			cout << "\n�߰��� ������ : ";
			cin >> input;
			list.Add(input);
			break;
		case 2:
			cout << "\n������ ������ : ";
			cin >> input;
			list.Delete(input);
			break;
		case 3:
			list.Print();
			break;
		case 4:
			cout << "\n\t���α׷��� �����մϴ�\n";
			return 0;
			break;

		default:
			break;

		}
	}
	return 0;
}
