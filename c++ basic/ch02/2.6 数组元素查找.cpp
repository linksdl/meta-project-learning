#include <iostream>

using namespace std;

// ����Ԫ�ز���
int main() {

	/*
		Ҫ���������е�KԪ��
		1.�������飬��ȡÿ��Ԫ��
		2.��Ҫ���ҵ�����K���бȽ�
		3.�����ȣ��Ͳ��ҵ���Ԫ�أ�����ǰ������ֵ��
	*/

	// ����һ������
	int arr[5] = { 78, 69, 56, 10, 20 };

	// ����Ԫ��
	int num = 80;

	int len = sizeof(arr) / sizeof(int);

	// ����һ��������¼���ҵ���Ԫ�ص�����
	int index = -1;

	for (int i = 0; i < len; i++) {

		if (num == arr[i]) {
			index = i;
			break;
		}
		else {
			continue;
		}

	}

	// ������
	if (index == -1) {
		cout << "û�в��ҵ�Ԫ��" << endl;
	}
	else {
		cout << "Ԫ�ص������ǣ�" << index << endl;
	}




	return 0;
}