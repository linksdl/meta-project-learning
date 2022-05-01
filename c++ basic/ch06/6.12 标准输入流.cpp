#include <iostream>
using namespace std;
/*
	cin.get()			// ��ȡһ���ַ�
	cin.get(һ������)	// ��ȡһ���ַ�
	cin.get(��������)	// ���Զ�ȡ�ַ���
	cin.getline()		// ��ȡһ������
	cin.ignore()		// ����
	cin.peek()			// ͵��
	cin.putback()		// �Ż�
*/

// cin.get()			// ��ȡһ���ַ�
void test01() {
	char ch = cin.get();
	cout << "ch = " << ch << endl;
	ch = cin.get();
	cout << "ch = " << ch << endl;
	ch = cin.get();
	cout << "ch = " << ch << endl;
	ch = cin.get();
	cout << "ch = " << ch << endl;

	/*char c;
	cin.get(c);*/
}

// cin.get(��������)	// ���Զ�ȡ�ַ���
void test02() {

	char buf[1024] = { 0 };
	cin.get(buf, sizeof(buf));
	cout << buf << endl;
	// char ch = cin.get();
	/*if (ch == '\n') {
		cout << "���з������ڻ�������" << endl;
	}
	else {
		cout << "���з�δ�����ڻ�������" << endl;
	}*/

	char buf1[1024] = { 0 };
	cin.get(buf1, sizeof(buf1));
	cout << buf1 << endl;
}

// cin.getline()		// ��ȡһ������
void test03() {

	char buf[1024] = { 0 };
	cin.getline(buf, sizeof(buf));

	char ch = cin.get();
	if (ch == '\n') {
		cout << "���з������ڻ�������" << endl;
	}
	else {
		cout << "���з�δ�����ڻ�������" << endl;
	}

	cout << "buf = " << buf << endl;

}

// cin.ignore()		// ����
void test04() {

	cin.ignore(3);	// Ĭ���Ǻ���1���������е��ַ�
	char ch = cin.get();
	cout << "ch = " << ch << endl;

}

// cin.peek()			// ͵��
void test05() {
	char ch = cin.peek();	// �鿴�������еĵ�һ���ַ���������ȡֵ
	cout << "ch = " << ch << endl;

	ch = cin.peek();	// �鿴�������еĵ�һ���ַ���������ȡ��
	cout << "ch = " << ch << endl;

	ch = cin.get();
	cout << "ch = " << ch << endl;

	ch = cin.get();
	cout << "ch = " << ch << endl;
}

// cin.putback()		// �Ż�
void test06() {

	char ch = cin.get();
	cin.putback(ch);	// ��ch�Żص��������У����ҷŻ�ԭλ

	char buf[1024] = { 0 };
	cin.getline(buf, sizeof(buf));

	cout << "buf = " << buf << endl;

}

int main() {

	test06();


	return 0;
}