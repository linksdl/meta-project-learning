#include <iostream>
using namespace std;

// ָ���������еĲ���
int main() {

	// ����һ������
	int arr[5] = { 10,20,30,40,50 };

	// ���󣺴���һ��ָ�����������arr�����е�Ԫ�صĵ�ַ
	int* p = arr;	// int* p; p = arr;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		/*cout << arr[i] << endl;
		cout << *(arr + i) << endl;*/
		// cout << *(p + i) << endl;
		cout << p[i] << endl;
	}

	cout << sizeof(arr) << endl;	// 20
	cout << sizeof(p) << endl;		// 4

	// ��Ҫ��Ϊpֻ�ܱ�����Ԫ�صĵ�ַ
	int* p1 = &arr[2];
	cout << "p1[1] = " << p1[1] << endl;
	cout << "p1[-1] = " << p1[-1] << endl;


	// ����
	int* p2 = arr;
	cout << *p2++ << endl;		// 10
	cout << (*p2)++ << endl;	// 20	// (*p2) = (*p2) + 1
	cout << *(p2++) << endl;	// 21

	return 0;
}