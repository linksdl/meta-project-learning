#include <iostream>
using namespace std;

// �ַ�ָ������
int main() {

	// "hahaha", "hehehe", "xixixi", "huhuhu"
	// ���󣺶���һ�����飬�������4���ַ�������Ԫ�صĵ�ַ��
	// ��������ĸ�ʽ�� ��������  ������[Ԫ�صĸ���];

	// �ַ�ָ������, ����ĵ�ֵַ�������Ǿ�����ַ��������ݡ�
	const char* arr[4] = { "hahaha", "hehehe", "xixixi", "huhuhu" };

	cout << sizeof(arr) << endl;	// 16

	// ��������
	for (int i = 0; i < sizeof(arr) / sizeof(arr[1]); i++) {
		cout << arr[i] << endl;
	}

	cout << *(arr[1] + 2) << endl; // hehehe - h

	// *(arr[1] + 2)
	// ��arr[1] ���� A
	// *(A + 2)
	// A[2] 
	// arr[1][2]	��ά����

	return 0;
}