#include <iostream>
using namespace std;

// ָ�����飺���ʻ������飬�����е�ÿ��Ԫ�ص�������ָ�����͡�
int main() {

	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int num4 = 40;

	// ���󣺶���һ�����飬�����ĸ������ĵ�ַ��
	int* arr[4] = { &num1, &num2, &num3,&num4 };

	// �������е�Ԫ�ؽ��в���
	*arr[2] = 300;
	cout << *arr[2] << endl;

	cout << sizeof(arr) << endl; // 16, 32
	cout << sizeof(arr[0]) << endl; // 4, 8

	// ��ָ��������б���
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << "---" << *arr[i] << endl;
	}

	return 0;
}