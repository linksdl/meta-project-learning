#include <iostream>
using namespace std;

// ������Ϊ��������
// �����������ݵķ�ʽ��3�֣�1.��ֵ����  2.����ַ����  3.�����ô���

// 1.��ֵ����
void valueSwap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

// 2.����ַ����
void pointerSwap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 3.�����ô���
void refSwap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {

	int m = 10;
	int n = 20;
	// valueSwap(m, n);
	// pointerSwap(&m, &n);
	// refSwap(m, n);
	cout << "m : " << m << endl;
	cout << "n : " << n << endl;



	return 0;
}