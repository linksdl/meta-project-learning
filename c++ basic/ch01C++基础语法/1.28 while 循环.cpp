#include <iostream>

using namespace std;

/*
	��ʼ���������;
	while (�ж��������) {
		ѭ�������;
		�����������;
	}

*/
int main() {

	// ����1���ڿ���̨���10��"HelloWorld"
	/*int i = 1;
	while (i <= 10) {
		cout << "HelloWorld" << endl;
		i++;
	}*/


	// ����2�����ڿ���̨�������1-10
	/*int i = 1;
	while (i <= 10) {
		cout << i << "\t";
		i++;
	}*/


	// ����3����1-100֮��
	//int i = 1;
	//// �����ۼӱ���
	//int sum = 0;
	//while (i <= 100) {
	//	sum += i;
	//	i++;
	//}
	//cout << "sum: " << sum << endl;


	// ����4��ͳ��"ˮ�ɻ���"���ж��ٸ�
	int i = 100;
	int count = 0;

	while (i <= 999) {
		int ge = i % 10;
		int shi = i / 10 % 10;
		int bai = i / 10 / 10 % 10;

		int res = ge * ge * ge + shi * shi * shi + bai * bai * bai;
		if (res == i) {
			count++;
		}
		i++;
	}

	cout << "ˮ�ɻ����ĸ����ǣ� " << count << endl;


	return 0;
}