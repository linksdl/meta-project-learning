#include <iostream>

using namespace std;

/*
	ʵ�ֶ��ֲ���
	ǰ�᣺�����е�Ԫ�ر�������
*/
int main() {

	int arr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	// ��Ҫ���ҵ�Ԫ����40
	int key = 55;

	int len = sizeof(arr) / sizeof(int);

	// ��������������¼�ƶ�������
	int low = 0;
	int high = len - 1;

	// ����һ��������¼�ҵ���Ԫ�ص�����
	int index = -1;

	while (low <= high) {
		// ����һ���м������ı���
		int mid = (low + high) / 2;

		// �Ƚ�
		if (arr[mid] < key) {
			low = mid + 1;
		}
		else if (arr[mid] > key) {
			high = mid - 1;
		}
		else {
			index = mid;
			break;
		}

	}

	if (index == -1) {
		cout << "û���ҵ�Ԫ��" << endl;
	}
	else {
		cout << "�ҵ���Ԫ�أ�����Ϊ��" << index;
	}


	return 0;
}