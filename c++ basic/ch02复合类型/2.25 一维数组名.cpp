#include <iostream>
using namespace std;

// һά������
int main() {

	// ����һ������
	int arr[5] = { 10,20,30,40,50 };

	// ������arr��������, ����sizeof()�����У���ʾ����������ܴ�С
	cout << sizeof(arr) << endl;	// 20

	// ������������Ϊ��ַ�����������Ԫ�صĵ�ַ��
	cout << arr << endl;	// int *
	cout << arr + 1 << endl;

	cout << "----------------------" << endl;

	cout << "arr[1] = " << arr[1] << endl;
	cout << "*(arr + 1) = " << *(arr + 1) << endl;

	// arr[1] չ�� *(arr + 1) : []��ߵ�ֵ��+�ŵ���ߣ�[]�����ֵ��+�ŵ��ұ�
	cout << "1[arr] = " << 1[arr] << endl;
	cout << "*(1 + arr) = " << *(1 + arr) << endl;

	// [] �Ƕ� *() ����д 
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		// cout << arr[i] << endl;
		// cout << i[arr] << endl;
		cout << *(arr + i) << endl;
	}

	// �Ƶ�����������Ϊ��ַ������Ԫ�صĵ�ַ
	// &arr[0] == &*(arr + 0) == arr + 0  == arr

	return 0;
}