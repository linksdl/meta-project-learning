#include <iostream>
#include <string>

using namespace std;

// string��
int main() {

	// �����ͳ�ʼ��
	string str1 = { 'H','e','l','l','o' };
	cout << str1 << endl;

	string str2 = "nihao";
	cout << str2 << endl;

	string str3 = { "Kitty" };
	cout << str3 << endl;

	string str4 { "Kitty1" };
	cout << str4 << endl;

	// �����Ĳ���
	string str5 = str4;
	cout << str5 << endl;

	string str6 = str1 + str3;
	cout << str6 << endl;

	str1 += str2;
	cout << str1 << endl;

	// ��ȡ����
	int len = str3.size();
	cout << len << endl;

	// cin�����������ݵ�string��
	string str7;

	// cin >> str7;
	getline(cin, str7);	// ���ջس�����Ϊ�ַ�������

	cout << str7 << endl;

	return 0;
}