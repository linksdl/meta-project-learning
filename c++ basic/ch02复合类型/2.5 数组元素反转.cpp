#include <iostream>

using namespace std;

/*
	�������������Ԫ�ط�ת
	�磺[18, 5, 24, 55, 76] ��ת�� [76, 55, 24, 5, 18]
*/
int main() {
	/*
		1. ����2��������¼��Ҫ����������������ֵ
			i��ʼΪ0��j��ʼΪlen-1
		2. ���������е�Ԫ�أ�����������������Ԫ��
		3. i++  j--�� ����������������Ԫ��
		4. ����ѭ����ѭ������������ j <= i

	*/

	int arr[5] = {18, 5, 24, 55, 76};

	int len = sizeof(arr) / sizeof(arr[0]);
	/*int i = 0;
	int j = len - 1;

	while (i < j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}*/

	for (int i = 0, j = len - 1; i < j; i++, j--) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}


	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}



	return 0;
}