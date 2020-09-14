#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	string data;
	data = "사랑,프로그래밍,의자,사랑의바보,영통역,천년의사랑,냉장고,객체지향";
	string keyword;
	int idx = 0, start, end, chk = 1;
	cout << "키워드 : ";
	cin >> keyword;
	cout << "검색결과 : ";

	if (data.find(keyword) == string::npos)
		cout << "(" << keyword << ")" << "가 존재하지 않습니다" << endl;

	else {
		while (true) {
			if (chk == 1)
				idx = data.find(keyword);

			else {
				idx = data.find(keyword, idx + keyword.length());
				if (idx == string::npos)
					break;
			}
			start = idx;
			end = idx;

			while (start != 0 && data[start - 1] != ',')
				start--;
			while (end != data.length() - 1 && data[end + 1] != ',')
				end++;
			for (int i = start; i <= end; i++)
				cout << data[i];

			cout << "   ";

			chk++;
		}
	}
	return 0;
}
