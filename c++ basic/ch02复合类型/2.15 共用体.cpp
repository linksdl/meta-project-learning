#include <iostream>
using namespace std;

// ����һ��������
union one4all {
	char ch;
	short s;
	int i;
};

// ��ʾ������
int main() {

	// �������������
	one4all u1;

	u1.ch = 'a';
	cout << u1.ch << endl;

	u1.i = 10;
	cout << u1.ch << endl;
	cout << u1.i << endl;

	u1.s = 4;

	cout << sizeof(u1) << endl;


	return 0;
}