#include <iostream>

using namespace std;

// ��ʾ��ά�����ʹ��
int main() {

	// ����һ����ά����
	// �洢3��ѧ��ÿ��ѧ��4�ο��Գɼ�
	int scores[3][4] = {
		{100, 99, 69, 98},
		{99, 89, 78, 100},
		{50, 59, 61, 99}
	};

	// ����Ԫ��
	// ��ȡ�ڶ���ѧ�������ο��Գɼ�
	cout << scores[1][2] << endl;

	// ������ά����
	int len = sizeof(scores) / sizeof(scores[0]);
	int len1 = sizeof(scores[0]) / sizeof(int);

	for (int i = 0; i < len; i++) {

		for (int j = 0; j < len1; j++) {
			cout << scores[i][j] << "\t";
		}
		cout << endl;

	}

	// �����ĳ�ʼ����ʽ
	int arr[3][4] = { {1, 2}, {5}, {6, 7, 8} };
	int arr1[3][4] = { 1, 2, 3, 4, 5, 6, 7 };

	int scores1[3][4] = {
		{100, 99, 69, 98},
		{99, 89, 78, 100},
		{50, 59, 61, 99}
	};

	return 0;
}