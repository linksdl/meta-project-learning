#include <iostream>

using namespace std;

// ʵ��ð��������㷨
// 24, 69, 80, 57, 13
int main() {

	int arr[5] = { 24, 69, 80, 57, 13 };

	int len = sizeof(arr) / sizeof(int);

	for (int j = 0; j < len - 1; j++) {
		for (int i = 0; i < len - 1 - j; i++) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	//// ��һ������
	//for (int i = 0; i < len - 1; i++) {
	//	if (arr[i] > arr[i + 1]) {
	//		int temp = arr[i];
	//		arr[i] = arr[i + 1];
	//		arr[i + 1] = temp;
	//	}
	//}

	//// �ڶ�������
	//for (int i = 0; i < len - 1 - 1; i++) {
	//	if (arr[i] > arr[i + 1]) {
	//		int temp = arr[i];
	//		arr[i] = arr[i + 1];
	//		arr[i + 1] = temp;
	//	}
	//}

	//// ����������
	//for (int i = 0; i < len - 1 - 2; i++) {
	//	if (arr[i] > arr[i + 1]) {
	//		int temp = arr[i];
	//		arr[i] = arr[i + 1];
	//		arr[i + 1] = temp;
	//	}
	//}

	//// ����������
	//for (int i = 0; i < len - 1 - 3; i++) {
	//	if (arr[i] > arr[i + 1]) {
	//		int temp = arr[i];
	//		arr[i] = arr[i + 1];
	//		arr[i + 1] = temp;
	//	}
	//}

	for (int i = 0; i < len; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;



	return 0;
}