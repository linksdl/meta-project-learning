#include <iostream>
using namespace std;

// ������̬����
int main() {

	// typeName * parr = new typeName[Ԫ�صĸ���]

	/*int num = 10;
	int arr[num];*/	// ���ַ�ʽ���������飬Ҫ�����������ǳ���ֵ��

	// int num = 10;
	int * p = new int[5];

	// ��Ҫ�Զ�̬������в���
	*p = 10;  // p[0] = 10;
	p[1] = 20;

	cout << p[0] << endl;
	cout << p[1] << endl;
	cout << p[2] << endl; // ��Ų�ȷ����ֵ
	cout << p[3] << endl; // ��Ų�ȷ����ֵ
	cout << p[4] << endl; // ��Ų�ȷ����ֵ

	// �ͷŶ�̬������ڴ�
	delete[] p;

	return 0;
}