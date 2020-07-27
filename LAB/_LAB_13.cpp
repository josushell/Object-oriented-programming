#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <list>
using namespace std;


// ex4 반복자 연습

int main() {
	int ary[] = { 1,2,3,4 };
	int* pBegin, * pEnd;
	pBegin = ary;
	pEnd = ary + 4;
	for (auto piter = pBegin; piter != pEnd; piter++) {
		cout << *piter << "\t";
	}
	cout << endl;

	vector<int> v{ 10,20,30,40 };
	auto iter_begin = begin(v);
	auto iter_end = end(v);
	for (auto iter = iter_begin; iter != iter_end; iter++) {
		cout << *iter << "\t";
	}
	cout << endl;

	return 0;
}

// ex5 거꾸로 출력

template <typename Iter>
void print(const Iter& iter_begin, const Iter& iter_end) {
	for (auto iter = iter_begin; iter != iter_end; iter++) {
		cout << *iter << "\t";
	}
	cout << endl;
}
template <typename Iter>
void print_reverse(const Iter& iter_begin, const Iter& iter_end) {
	Iter iter = iter_end;
	while (iter != iter_begin) {
		iter--;
		cout << *iter << "\t";
	}
	cout << endl;
}
int main() {
	vector<int> v{ 1, 2, 3, 4 }; 
	list<double> l{ 1.1, 2.2, 3.3 };  
	int ary[] = { 100, 200, 300, 400 };

	print(begin(v), end(v)); 
	print(begin(l), end(l));  
	print(begin(ary), end(ary));

	print_reverse(begin(v), end(v)); 
	print_reverse(begin(l), end(l)); 
	print_reverse(begin(ary), end(ary));

	return 0;
}


// ex1 정렬

template <typename T>
class CList {
private:
	T m_Array[5];
	int m_Length;
public:
	CList():m_Length(0) {}
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
			cout << "\nList is full" << "\n\n";
		}
		else {
			m_Array[m_Length] = data;
			m_Length++;

			for (int i = 0; i < m_Length; i++) {
				for (int j = i + 1; j < m_Length; j++) {
					if (m_Array[i] > m_Array[j]) {
						int temp = m_Array[i];
						m_Array[i] = m_Array[j];
						m_Array[j] = temp;
					}
				}
			}
		}
	}
	void Delete(T data) {
		if (IsEmpty() == 1) {
			cout << "\nList is empty" << "\n\n";
		}
		else {
			for (int i = 0; i < m_Length; i++) {
				if (m_Array[i] == data) {
					for (int j = i; j < m_Length; j++) {
						m_Array[j] = m_Array[j + 1];
					}
					break;
				}
			}
			m_Length--;
		}
	}
	void Print() {
		cout << "**Current List" << endl;
		for (auto iter = m_Array; iter < m_Array + 5; iter++) {
			cout << *iter << " ";
		}
		cout << endl;
	}
};
int command() {
	int num;

	cout << "\n\t---- menu ----" << endl;  
	cout << "\t1. 리스트 추가" << endl;
	cout << "\t2. 리스트 삭제" << endl;  
	cout << "\t3. 리스트 출력" << endl;  
	cout << "\t4. 프로그램 종료" << endl;
	cout << "\n\t입력 --> ";  
	cin >> num;
	return num;
} 

int main() {
	CList<int> list;
	int input; 
	int com; 
	while (1)  { 
		com = command(); 

  switch (com)   {  
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

// ex2 벡터 곱 최대 최소
#include <ctime>
int main() {
	vector<int> v1(10), v2(10);
	srand((unsigned int)time(NULL));

	for (auto& elem : v1) {
		elem = rand() % 11;
	}

	for (auto& elem : v2) {
		elem = rand() % 21;
	}

	cout << "vector 1" << endl;
	for (auto& elem : v1) {
		cout << " " << elem;
	}

	cout << "\nvector 2" << endl;
	for (auto& elem : v2) {
		cout << " " << elem;
	}

	int min = 0, max = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (min > v1[i] * v2[j]) {
				min = v1[i] * v2[j];
			}
			if (max < v1[i] * v2[j]) {
				max = v1[i] * v2[j];
			}
		}
	}

	cout << endl;
	cout << "최댓값 = " << max << endl;
	cout << "최솟값 = " << min << endl;

	return 0;
}


// ex3 회문

int main() {
	while (1) {
		string str;
		cout << "문자열 하나를 입력해주세요 : ";
		cin >> str;

		int i = str.length();
		string reverse_str;
		while (i!=0) {
			i--;
			reverse_str.push_back(str[i]);
		}

		cout << "입력하신 문자열의 역순 : " << reverse_str << endl;

		cout << "이 문자는 회문";

		if (reverse_str == str) {
			cout << "입니다." << "\n\n";
		}
		else {
			cout << "이 아닙니다." << "\n\n";
		}
	}

}


// ex4 홀수 마방진 -> 다시

int main() {
	int n;
	cout << "홀수 숫자를 하나 입력하세요 : ";
	cin >> n;
	
	int m1, m2;
	vector<vector<int>> v(n, vector<int> (n));
	m1 = 0;
	m2 =(n / 2);

	for (int i = 1; i <= n * n; i++) {
		v[m1][m2] = i;
		if (i % n == 0) {
			m1 += 1;
		}
		else {
			m1 -= 1;
			m2 += 1;
		}
		if (m1 < 0)
			m1 = n - 1;

		if (m2 > n - 1)
			m2 = 0;
	}


	for (auto& vec : v) {
		for (auto& elem : vec) {
			cout << setw(3) << elem;
		}
		cout << endl;
	}
}


// ex5 Queue class 만들기

template <typename T>
class Queue {
private:
	T* p_list;
	int size;
	int MAX_SIZE;
public:
	Queue(int _MAX_SIZE = 1000) {
		MAX_SIZE = _MAX_SIZE;
		p_list = new T[MAX_SIZE];
	}
	~Queue() {
		delete[] p_list;
	}
	int find_index(T _item) {
		for (int i = 0; i < size; i++) {
			if (p_list[i] == _item) {
				return i;
			}
		}
		return -1;
	}
	void Enqueue(T _item) {
		if (size > MAX_SIZE) {
			cout << "Error: out of memory" << endl;
		}
		else {
			if (find_index(_item) == -1) {
				p_list[size] = _item;
				size++;
			}
		}
	}
	T Dequeue() {
		if (size == 0) {
			cout << "Error: no item exists in the list" << endl;
		}
		else {
			auto temp = p_list[0];
			for (int i = 0; i < size; i++) {
				p_list[i] = p_list[i + 1];
			}
			size--;
			return temp;
		}
	}
	void print() const {
		cout << "Items in the list : ";
		for (auto i = 0; i < size; i++) {
			cout << p_list[i] << ", ";
		}
		cout << endl;
	}
	int get_size() { return size; }
	T get_item(int _index) { return p_list[_index]; }
};
int main()
{
	Queue<int> int_queue;
	Queue<float> float_queue;
	Queue<char> char_queue;

	int_queue.Enqueue(1);
	int_queue.Enqueue(2);
	int_queue.Enqueue(2);
	int_queue.Enqueue(5);

	float_queue.Enqueue(4.3);
	float_queue.Enqueue(2.5);
	float_queue.Enqueue(3.7);
	float_queue.Enqueue(3.7);

	char_queue.Enqueue('b');
	char_queue.Enqueue('b');
	char_queue.Enqueue('c');
	char_queue.Enqueue('a');

	cout << "<Before Dequeue>" << endl;
	int_queue.print();
	float_queue.print();
	char_queue.print();

	int_queue.Dequeue();
	float_queue.Dequeue();
	float_queue.Dequeue();

	char_queue.Dequeue();
	char_queue.Dequeue();
	char_queue.Dequeue();
	char_queue.Dequeue();

	cout << "<After Dequeue>" << endl;
	int_queue.print();
	float_queue.print();
	char_queue.print();

	return 0;
}