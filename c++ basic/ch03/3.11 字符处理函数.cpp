#include <iostream>
#include <string>
using namespace std;

// �ַ�������
// ���󣺼���¼��һ�仰��ͳ����λ�����ĸ�ַ��������ַ����հס������ŵ��ַ��ĸ�����
int main() {

	// ����¼������
	string str;
	cout << "������һ�λ���" << endl;

	// cin >> str;
	getline(cin, str);

	// ����һ��������¼��Щ�ַ��ĸ���
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	for (int i = 0; i < str.size(); i++) {
		
		char ch = str[i];
		if (isalpha(ch)) {
			chars++;
		}
		else if (isspace(ch)) {
			whitespace++;
		}
		else if (isdigit(ch)) {
			digits++;
		}
		else if (ispunct(ch)) {
			punct++;
		}
		else {
			others++;
		}

	}

	cout << chars << " ����ĸ�ַ�, "
		<< whitespace << " ���հ��ַ�, "
		<< digits << " �������ַ�, "
		<< punct << " ���������ַ�, "
		<< others << " �������ַ��� " << endl;

	return 0;
}