#include <iostream>
using namespace std;

// ���� �����Ǳ����ı���
// typename & ���õ����� = ������;
int main() {

	// ����һ����ͨ�ı���num
	int num = 10;
	// ��num����һ�����ã�������
	int& rnum = num;	// &����ȡ��ַ����������Ǳ�ʾ����

	cout << num << endl;
	cout << rnum << endl;

	cout << "===================" << endl;

	// ͨ��rnum�����޸�ֵ
	rnum = 100;
	cout << num << endl;
	cout << rnum << endl;

	// һ�����������ж�����ã�������
	int& rnum1 = num;
	rnum1 = 200;
	cout << num << endl;
	cout << rnum << endl;
	cout << rnum1 << endl;

	cout << &num << endl;
	cout << &rnum << endl;
	cout << &rnum1 << endl;
	cout << "====================" << endl;

	// ���õ�ע������
	// 1.���ñ������úϷ����ڴ�ռ�
	// int& rnum2 = 10;	// ����
	// 2.���ñ����ʼ��
	// int& rnum2;
	// 3.����һ����ʼ�������ܸı�����
	int a = 10;
	int b = 20;
	int& ref = a;
	ref = b;
	cout << a << endl;
	cout << b << endl;
	cout << ref << endl;

	// 4.���������
	int arr[3] = { 1,2,3 };
	int(&rarr)[3] = arr;
	rarr[1] = 100;
	cout << arr[1] << endl;

	// 5.���õı��ʣ�ͨ��ָ�볣��ȡʵ�ֵġ�
	/*
		int a = 10;
		int & aref = a;		int * const aref = &a; ͨ��ָ�볣��
		aref = 20;			*aref = 20;
	
	*/

	return 0;
}