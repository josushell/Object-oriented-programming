#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
/*
int main() {
	vector<double> nums{ 1.0,2.0,3.0,4.0 };
	int input;
	cout << "enter an index: ";
	cin >> input;
	try {
		cout << nums.at(input) << '\n';
		//at�� �ƴϸ� catch���� ������ �ȵ�
		//at���� catch���� ����Ǵ� �κ��� �ֱ⶧����
	}
	catch (exception& e) {
		cout << e.what() << '\n';
	}
}*/

//exception class: standard base xception class
//base class �ϱ� ��ӹ޴� derived class�� ����
//member function�� what�̶�� method
//what: � ������ ������ ���ڿ��� ��ȯ���ִ� method



class filenotfoundexception :public exception {
	//��� ����ó�� class�� ��� �޾ƾ���
	string message;
public:
	filenotfoundexception(const string& fname) :
		message("File \"" + fname + "\" not found"){};

	virtual const char* what() const throw (){

		//ù��° const: ��� data type�� const�� �ٲ� �� ���ٴ� ��
		// �ι�° const: what �Լ��� � ��� ������ �ٲ��� �ʴ´ٴ� �ǹ�

		//overriding ���� virtual
		//what�� overriding���� ���� �� �̴ٴ� �ǹ�
		//�� filenotfound�� �ٽ� �θ�Ŭ������ ������ what ����� �����ϰ� ��



		//what �Լ� �������̵�
		//�������̵� �ҷ��� what�� ������ ���ƾ��ϴϱ�
		//���� ������ what�� ����� const char* �迭�� ���ڿ� ǥ��
		return message.c_str();
		//message�� string ��ü�� ��ȯ���� char�迭�̴ϱ� �޶�
		//��ü�� �迭�� �ٲ��ִ� �Լ��� �ʿ�
		//string ��ü �ȿ��� c_str() method �� �����ϴµ�
		//��ü�� �迭�� �ٲ��� : ���ڿ��� const char* �� ��ȯ������
	}
};


	vector<int> load_vector(const string & filename) {
		ifstream fin(filename);
		if (fin.good()) {
			vector<int> result;
			int n;
			fin >> n;
			for (int i = 0; i < n; i++) {
				int value;
				fin >> value;
				result.push_back(value);
			}
			return result;
		}
		else
			throw filenotfoundexception(filename);

	}

	int main() {
		try {
			//try�� ����ó���� �Ѵٴ°��� 
			//try���� ������
			//throw���� ������ ���� ����� catch�� �ߵ��Ǵ°�
			//catch�� ������ ���� ����� catch������ ����.
			//anonymous ��ü�� throw������ ����.
			vector<int> numbers = load_vector("values.data");
		}
		catch (exception& e) {
			cout << e.what() << '\n';
		}
}

	//exception class�� �ڽ� Ŭ������ ���� ���ε� ��ų �� ����: ������
	//final ���ص�


	//try�ȿ� ������ ������ ���� �� ó�� �� ������ �߿�
	//throw�� �ѹ� �߻��ϸ� try���� �� �����°�
	
