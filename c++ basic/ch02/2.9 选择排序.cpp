#include <iostream>

using namespace std;

// ѡ������
int main() {

	// 24, 69, 80, 57, 13
	int arr[5] = { 24, 69, 80, 57, 13 };
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int j = 0; j < 4; j++) {
		for (int i = j + 1; i < len; i++) {
			if (arr[j] > arr[i]) {
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	//// ��һ������
	//int index = 0;
	//for (int i = index + 1; i < len; i++) {
	//	if (arr[index] > arr[i]) {
	//		int temp = arr[index];
	//		arr[index] = arr[i];
	//		arr[i] = temp;
	//	}
	//}

	//// �ڶ�������
	//index = 1;
	//for (int i = index + 1; i < len; i++) {
	//	if (arr[index] > arr[i]) {
	//		int temp = arr[index];
	//		arr[index] = arr[i];
	//		arr[i] = temp;
	//	}
	//}

	//// ����������
	//index = 2;
	//for (int i = index + 1; i < len; i++) {
	//	if (arr[index] > arr[i]) {
	//		int temp = arr[index];
	//		arr[index] = arr[i];
	//		arr[i] = temp;
	//	}
	//}

	//// ����������
	//index = 3;
	//for (int i = index + 1; i < len; i++) {
	//	if (arr[index] > arr[i]) {
	//		int temp = arr[index];
	//		arr[index] = arr[i];
	//		arr[i] = temp;
	//	}
	//}

	// ��������
	for (int i = 0; i < len; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;





	return 0;
}