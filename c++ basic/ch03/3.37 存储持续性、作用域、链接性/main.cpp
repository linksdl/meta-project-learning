#include <iostream>
using namespace std;

// �洢�����ԡ�������������
/*
	�洢�����ԣ�
	1.�Զ��洢������
	�ں��������кͺ����Ĳ��������ı������������Ǿֲ���û��������
	2.��̬�洢������
		a.�ⲿ�����ԣ������ڴ����������������֮Ϊȫ�ֱ������ⲿ������
		b.�ڲ������ԣ������ڴ��������������ʹ��static���Ρ�
		c.�������ԣ��ڴ������������ʹ��static���Ρ�

	3.��̬�洢������
*/
static int global = 2000;

extern const int num;

int main() {

	//int num = 5;
	//{
	//	// int num = 10;
	//	int price = 20;
	//	cout << num << endl;
	//}

	cout << num << endl;

	return 0;
}