#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	string data;
	data = "���,���α׷���,����,����ǹٺ�,���뿪,õ���ǻ��,�����,��ü����";
	string keyword;
	int idx = 0, start, end, chk = 1;
	cout << "Ű���� : ";
	cin >> keyword;
	cout << "�˻���� : ";

	if (data.find(keyword) == string::npos)
		cout << "(" << keyword << ")" << "�� �������� �ʽ��ϴ�" << endl;

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
