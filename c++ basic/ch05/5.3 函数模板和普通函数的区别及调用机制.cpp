#include <iostream>
using namespace std;

/*
	��ͨ�����ͺ���ģ����ù���
	1.C++���������ȿ�����ͨ����
	2.����ͨ����ģ��ʵ�������б���﷨�޶�������ֻ��ͨ��ģ��ƥ��
	3.����ģ���������ͨ����һ����������
	4.�������ģ����Բ���һ�����õ�ƥ�䣬��ô����ѡ��ģ��
*/

// 1������
template<class T>
T myPlus(T a, T b) {
	return a + b;
}

int myPlus2(int a, int b) {
	return a + b;
}

// 2�����ù���
void myPrint(int a, int b) {
	cout << "��ͨ����myPrint����" << endl;
}

template<class T>
void myPrint(T a, T b) {
	cout << "����ģ��myPrint����" << endl;
}

template<class T>
void myPrint(T a, T b, T c) {
	cout << "���غ���ģ��myPrint����" << endl;
}

// ����ģ��ͨ���������Ͳ�����ͬ�ĺ���
// ͨ������ģ������ĺ��� ��Ϊ ģ�庯��
//void myPrint(int a, int b) {
//	cout << "����ģ��myPrint����" << endl;
//}
//
//void myPrint(int a, int b, int c) {
//	cout << "���غ���ģ��myPrint����" << endl;
//}

void test2() {
	// 1. �����ͨ�����ͺ���ģ�嶼����ƥ�䣬����ʹ����ͨ����
	int a = 10;
	int b = 20;
	myPrint(a, b);

	// 2. �����Ҫǿ�Ƶ��ú���ģ�壬��Ҫ���� ��ģ������б�
	myPrint<>(a, b);

	// 3. ����ģ��Ҳ���Է�����������
	myPrint(a, b, 10);

	// 4. �������ģ����Բ������õ�ƥ�䣬��ô����ʹ�ú���ģ��
	char c1 = 'c';
	char c2 = 'd';
	myPrint(c1, c2);
}


void test1() {
	int a = 10;
	int b = 20;
	char c = 'c';

	// myPlus(a, c); ����ģ�� ���Զ������Ƶ���ʱ�򣬲��ᷢ����ʽ����ת��
	cout << myPlus<int>(a, c) << endl;
	cout << myPlus2(a, c) << endl;

	/*cout << myPlus(a, b) << endl;
	cout << myPlus2(a, b) << endl;*/
}


// ����ģ�����ͨ�����������Լ����û���
int main() {

	test2();


	return 0;
}