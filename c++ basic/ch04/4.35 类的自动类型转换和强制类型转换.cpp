#include <iostream>
using namespace std;

class MyString {
public:
	// ��explicit���εĹ��캯�����������Զ�����ת������ʽ����ת����
	explicit MyString(int len) {
		cout << "MyString�вι���MyString(int len)..." << endl;
	}

	MyString(const char* str) {
		cout << "MyString�вι���MyString(const char* str)..." << endl;
	}

	// ת������  ת����double
	operator double() {
		// ҵ���߼�
		return 20.1;
	}

};

// ����Զ�����ת����ǿ������ת��
/*
	����������������ת���ɻ������͵����ݣ�������Ҫ���������ת������
	1.ת�������������෽��
	2.ת����������ָ����������
	3.ת�����������в���
*/
int main() {

	// ���������������͵��Զ�����ת����ǿ������ת��
	long count = 8;
	double time = 10;
	int size = 3.14;
	cout << count << endl;
	cout << time << endl;
	cout << size << endl;

	double num = 20.3;
	cout << num << endl;
	// ǿ��ת����int���͵�����
	int num1 = (int)num;
	int num2 = int(num);
	cout << num1 << endl;
	cout << num2 << endl;

	MyString str = "hello";	// MyString str = MyString("hello");

	// MyString str1 = 10;	// MyString str1 = MyString(10);
	MyString str1 = MyString(10);

	// ���ǿ������ת��
	double d = str1;
	cout << d << endl;

	double d1 = double(str);
	double d2 = (double)str;
	cout << d1 << endl;
	cout << d2 << endl;

	return 0;
}