#include <iostream>
using namespace std;

// ��ʾ���ʹ��ָ�����
int main() {

	int  num = 10;
	int* p;
	p = &num;

	// p��&num ��ͬһ��ֵ
	cout << p << endl;
	cout << &num << endl;

	// ��pʹ�ý�����������
	// *p == num
	cout << *p << endl;

	*p = 100;
	cout << *p << endl;
	cout << num << endl;
	
	// num++
	(*p)++;	// (*p) = (*p) + 1;
	cout << *p << endl;
	cout << num << endl;

	cin >> *p;

	cout << *p << endl;

	// Ұָ��
	int* ptr = (int *)0x787878;
	*ptr = 10;

	// ��ָ��
	int* ptr1 = nullptr;
	// if(ptr1 == nullptr)


	return 0;
}