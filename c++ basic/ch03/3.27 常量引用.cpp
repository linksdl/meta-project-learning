#include <iostream>
using namespace std;

// ��������
/*
	��ֵ���ǿ��Ա����õ����ݶ���= ��� ���磺����������Ԫ��arr[0]���ṹ������ĳ�Ա�����á�������õ�ָ��
	��ֵ������ֵ�������泣��(10, 20)����������ı��ʽ��
	��ͨ�������ڿ��޸ĵ���ֵ��const�������ڲ����޸ĵ���ֵ��
*/

// ���庯��������һ����������
int vcube(int num) {
	return num *= num * num;
}

int rcube1(int& rnum) {
	return rnum * rnum * rnum;
}

int rcube(const int& rnum) {	// int temp = a; const int& rnum = temp; �������� �����޸�
	// return rnum *= rnum * rnum;
	return rnum * rnum * rnum;
}

int main() {

	// ����һ�����ñ���
	// int& b = 10;	// �ǳ������õĳ�ʼֵ����Ϊ��ֵ��

	// ��������
	// const int& b = 10;	// int temp = 10; const int& b = temp;
	
	/*int num = 2;
	cout << num << "�������ǣ�" << vcube(num) << endl;

	int rnum = 2;
	cout << rnum << "�������ǣ�" << rcube(rnum) << endl;*/

	/*const int b = 10;
	vcube(b);
	rcube1(b);*/

	const double a = 10;
	// rcube1(a);
	rcube(a);

	return 0;
}
/*
	ʹ�ó���������Ϊ���������ĺô���
	1.�����������޸����ݡ�
	2.�ܹ�����const�ͷ�const��ʵ�Σ�����ֻ�ܽ��ܷ�const�����ݡ�
	3.ʹ������ȷ���ɲ�ʹ����ʱ������
*/