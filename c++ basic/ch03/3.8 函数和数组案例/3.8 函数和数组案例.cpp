#include <iostream>
#include "arr.h"
using namespace std;

// ����������İ���
int main() {

	// ����һ������
	int arr[5] = { 24, 69, 80, 57, 13 };

	// ��ȡԪ�صĸ���
	int len = sizeof(arr) / sizeof(arr[0]);

	// ��������
	printArr(arr, len);

	// ��������Ԫ�صĺ�
	int sum = getSum(arr, len);
	cout << sum << endl;

	// ��ȡ��ֵ
	int max;
	int min;
	getMaxAndMin(arr, len, &max, &min);
	cout << "���ֵ��" << max << "  ��Сֵ��" << min << endl;

	// ����
	bubbleSort(arr, len);

	// ��������
	printArr(arr, len);


	return 0;
}