#include <iostream>
using namespace std;

// ��ʾָ�����ȡֵ�Ŀ�Ⱥ�+1�Ŀ��
int main() {

	// ���
	int num = 0x01020304;
	int* p = &num;

	cout << hex <<  *p << endl;

	short* s = (short *)&num;
	cout << hex << *s << endl;

	// ���
	short* s1 = nullptr;
	cout << "s1 : " << s1 << endl;
	cout << "s1 + 1 : " << s1 + 1 << endl;

	int* p1 = nullptr;
	cout << "p1 : " << p1 << endl;
	cout << "p1 + 1 : " << p1 + 1 << endl;

	// ��ȡ�ڶ����͵������ֽڵ�����
	char* c = (char *)&num;
	short * s3 = (short *)(c + 1);
	cout << hex << *s3 << endl;

	return 0;
}