#include <iostream>
using namespace std;

/*
	˵���������������Ϊ�����Ĳ�������ô������������Ż���
	�������Ὣ�������ת���� ָ�����͵ı��������ڽ����������Ԫ�صĵ�ַ��

*/

// ����һ����������������Ϊ�������ݽ����������б��������Ԫ�ء�
void printArr(int arr[]) {	// �Ż� int * p

	cout << "printArr sizeof(arr) --- " << sizeof(arr) << endl;	// 4

	// ��ȡ����ĳ��ȣ�����Ԫ�صĸ�����
	int len = sizeof(arr) / sizeof(arr[0]);

	// ����
	for (int i = 0; i < len; i++) {
		cout << arr[i] << "\t";	// arr[i] == *(arr + i)
	}
	cout << endl;

}

void printArr1(int * arr, int count) {	// �Ż� int * p

	// ����
	for (int i = 0; i < count; i++) {
		cout << arr[i] << "\t";	// arr[i] == *(arr + i)
	}
	cout << endl;

}


// ����������
int main() {

	// ����һ������
	int arr[5] = { 0 };

	int len = sizeof(arr) / sizeof(arr[0]);

	// cout << "main sizeof(arr) --- " << sizeof(arr) << endl;	// 20

	// ���ñ�������ĺ���
	printArr1(arr, len);

	// printArr(arr);


	return 0;
}