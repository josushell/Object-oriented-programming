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
		//at이 아니면 catch문이 실행이 안됨
		//at에는 catch문이 실행되는 부분이 있기때문에
	}
	catch (exception& e) {
		cout << e.what() << '\n';
	}
}*/

//exception class: standard base xception class
//base class 니까 상속받는 derived class가 있음
//member function에 what이라는 method
//what: 어떤 오류가 났는지 문자열로 반환해주는 method



class filenotfoundexception :public exception {
	//모든 예외처리 class는 상속 받아야함
	string message;
public:
	filenotfoundexception(const string& fname) :
		message("File \"" + fname + "\" not found"){};

	virtual const char* what() const throw (){

		//첫번째 const: 출력 data type이 const로 바꿀 수 없다는 것
		// 두번째 const: what 함수가 어떤 멤버 변수를 바꾸지 않는다는 의미

		//overriding 에서 virtual
		//what은 overriding으로 만든 것 이다는 의미
		//이 filenotfound가 다시 부모클래스가 됬을때 what 상속을 가능하게 함



		//what 함수 오버라이딩
		//오버라이딩 할려면 what의 형식이 같아야하니까
		//같게 맞춰줌 what은 출력이 const char* 배열로 문자열 표현
		return message.c_str();
		//message는 string 객체고 반환형은 char배열이니까 달라서
		//객체를 배열로 바꿔주는 함수가 필요
		//string 객체 안에는 c_str() method 가 존재하는데
		//객체를 배열로 바꿔줌 : 문자열을 const char* 로 변환시켜줌
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
			//try로 예외처리를 한다는것은 
			//try안의 내용이
			//throw문을 만나면 가장 가까운 catch가 발동되는것
			//catch가 많으면 가장 가까운 catch문으로 간다.
			//anonymous 객체가 throw안으로 들어간ㄷ.
			vector<int> numbers = load_vector("values.data");
		}
		catch (exception& e) {
			cout << e.what() << '\n';
		}
}

	//exception class는 자식 클래스를 동적 바인딩 시킬 수 있음: 다형성
	//final 안해도


	//try안에 오류가 여러번 나도 맨 처음 난 오류가 중요
	//throw문 한번 발생하면 try문은 걍 끝나는거
	
