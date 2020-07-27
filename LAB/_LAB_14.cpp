#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <list>
#include <fstream>
#include <functional> //closure 사용시 필요
using namespace std;

// ex1 람다 함수 예제
/*
int sum(int x, int y) { return x + y; }
int evaluate(int (*f)(int, int), int x, int y) {
	return f(x, y);
}
int evaluate2(function<int(int, int)> f, int x, int y) {
	return f(x, y); 	// closure 사용시 funtion 객체로 전달
}
int main() {
	auto f = [](int x, int y)->int {return x + y; };
	cout << evaluate(&sum, 10, 20) << endl;
	cout << f(100, 200) << endl;

	int a = 1, b = 2;

}
*/

// ex5 try and catch
/*
class FileNotException :public exception {
	string m;
public:
	FileNotException(string _m) :m("File not found" + _m) {};
	virtual const char* what() const throw() {
		return m.c_str();
	}
};

vector<int> load_vector(string& fname) {
	ifstream fin(fname);

	if (!fin) {
		throw FileNotException(fname);
	}

	vector<int> result;
	int num, value;
	fin >> num;
	for (int i = 0; i < num; i++) {
		fin >> value;
		result.push_back(value);
	}
	return result;
}
int main() {
	string str;
	cout << "파일 이름 : ";
	cin >> str;
	try {
		vector<int> v = load_vector(str);
		for (auto& elem : v)
			cout << elem << " ";
		cout << endl;
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
	return 0;
}

*/

class stack {
private:
	int* p_list;
	int size;
	int MAX_SIZE;
public:
	stack(int _max_size = 1000) :MAX_SIZE(_max_size), size(0) {
		p_list = new int[MAX_SIZE];
	};
	~stack() {
		delete[] p_list;
	}
	int find_index(int _item) {
		for (int i = 0; i < size; i++) {
			if (p_list[i] == _item)
				return i;
		}
		return -1;
	}
	void push(int _item) {
		if (size > MAX_SIZE) {
			cout << "Error: out of memory" << endl;
		}
		else {
			if (this->find_index(_item) == -1) {
				p_list[size]=_item;
				size++;
			}
		}

	}
	int pop() {

	}
	void print() const {
		cout << "Items in the list : ";
		for (int i = 0; i < size; i++) {
			cout << p_list[i] << ", ";
		}
		cout << endl;
	}
	int get_size() { return size; }
	int get_item(int _index) {
		return p_list[_index];
	}
	void operator+=(stack& s) {
		for (int i = 0; i < s.get_size(); i++) {
			push(get_item(i));
		}
	}
	bool operator==(stack& s) {
		if (this->get_size() == s.get_size()) {
			for (int i = 0; i < this->get_size(); i++) {
				if (s.get_item(i) == this->get_item(i)) {
					return true;
				}
			}
		}
		return false;

	}
};


