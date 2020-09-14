#include <iostream>
using namespace std;


class Stack {
private:
	int* p_list;
	int size;
	int MAX_SIZE;
public:
	Stack(int _max_size = 1000) :MAX_SIZE(_max_size),size(0) {
		p_list = new int[MAX_SIZE];
	};
	~Stack() {
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
			if (find_index(_item) == -1) {
				p_list[size] = _item;
				size++;
			}
		}

	}
	int pop() {
		if (size == 0) {
			cout << "Error: No item exists in the list" << endl;
		}
		else {
			auto temp = p_list[size - 1];
			size--;
			return temp;
		}
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
	void operator+=(Stack& s) {
		for (int i = 0; i < s.get_size(); i++) {
			push(s.get_item(i));
		}
	}
	bool operator==(Stack& s) {
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
int main()
{
	Stack s1, s2;
	s1.push(1);
	s1.push(2);
	s1.push(3);


	s2.push(1);
	s2.push(2);
	s2.push(5);

	s1.print();
	s2.print();

	s1 += s2;

	s1.print();
	s2.print();
	cout << "s1 == s2 ? " << (s1 == s2) << endl;

	s1.pop(); // 5 out
	s1.pop(); // 3 out
	s2.pop(); // 5 out

	cout << "s1 == s2 ? " << (s1 == s2) << endl;
	s2.pop();
	s2.pop();
	s2.pop();

	return 0;
}