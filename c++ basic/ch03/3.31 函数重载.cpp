#include <iostream>
using namespace std;

void func() {
	cout << "func() ����������" << endl;
}

void func(int a) {
	cout << "func(int) ����������" << endl;
}

void func(double a) {
	cout << "func(double) ����������" << endl;
}

void func(int a, double b) {
	cout << "func(int) ����������" << endl;
}

void func(double a, int b) {
	cout << "func(int) ����������" << endl;
}

class  Person
{
    void fun(int a)
    {
        cout << "func(int) ����������" << endl;
    }

};

// ��������
/*
	�������ص�������C++������������ͬ��
	1.����ͬ����������
	2.�����ĸ��������ͣ�����˳��ͬ�������겻ͬ��

	�����ķ���ֵ������Ϊ�������ص�����ô��
	�����ԡ�

*/
int main() {

	func();
	func(20);
	func(3.14);
    func(3.14, 1);
    func(1, 3.14);

	return 0;
}