#include <iostream>
using namespace std;

// ����ָ��	��һ��ָ����������������һ��ָ������ĵ�ֵַ��
int main() {

	int num = 10;

	int* p = &num;

	// ����һ������ָ��
	int** q = &p;

	cout << num << endl; // 10
	cout << p << endl;   // 008FFC3C
	cout << q << endl;   // 008FFC30

	cout << *p << endl;  // 10
	cout << *q << endl;  // 008FFC3C

	cout << **q << endl; // 10



	return 0;
}