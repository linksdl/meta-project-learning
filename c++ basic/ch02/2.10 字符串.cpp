#pragma warning(disable:4996)
#include <iostream>
#include <cstring>

using namespace std;

// C-�����ַ���
int main() {

	// �����ַ���
	// char name[5] = {'h','e','l','l','o'};
	char name1[6] = { 'h','e','l','l','o','\0'};

	// cout << name << endl;
	cout << name1 << endl;

	// 1.����¼�����ݵ��ַ�����
	//char name2[20];
	//// cin >> name2;
	//cin.getline(name2, 20);
	//cout << name2 << endl;
	
	// 2.cstring �����˶��ַ�����صĲ���
	// ��ȡ�ַ����ĳ��� strlen()
	// ���ַ������Ƶ��ַ������� strcpy()
	// ���ַ����ӵ��ַ������ĩβ  strcat()
	/*char name3[] = "hello";
	int len = strlen(name3);
	cout << len << endl;
	cout << sizeof(name3) << endl;*/

	char chs[20];
	strcpy(chs, "hello");

	cout << chs << endl;

	strcat(chs, "nihao");
	cout << chs << endl;

	return 0;
}