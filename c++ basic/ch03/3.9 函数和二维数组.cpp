#include <iostream>
using namespace std;

// ����һ��������������ά�����е�Ԫ��
void print2Arr(int arr[][3], int count) {

	for (int r = 0; r < count; r++) {

		for (int c = 0; c < 3; c++) {
			cout << arr[r][c] << "\t";
		}
		cout << endl;
	}

}

void print2Arr1(int (*arr)[3], int count) {

	for (int r = 0; r < count; r++) {

		for (int c = 0; c < 3; c++) {
			cout << arr[r][c] << "\t";
		}
		cout << endl;
	}

}

// ����һ�������������ά����Ԫ�صĺ�
int getSum(int* p, int row, int col) {

	// ����һ���ۼӱ���
	int sum = 0;
	for (int i = 0; i < row * col; i++) {
		sum += *p;
		p++;
	}

	return sum;

}

// �����Ͷ�ά����
int main() {

	// ����һ����ά����
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	// ������ά�����е�Ԫ��
	// �����ά����Ԫ�صĸ���
	int count = sizeof(arr) / sizeof(arr[0]);
	// cout << count << endl;

	// print2Arr1(arr, count);

	int sum = getSum(arr[0], 2, 3);
	cout << sum << endl;

	return 0;
}