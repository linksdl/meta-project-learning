#include <iostream>

using namespace std;

/*
	if���ĵڶ��ָ�ʽ
		if (��������) {
			�����1;
		} else {
			�����2;
		}
*/
int main() {

	// a.��ȡ���������е����ֵ��
	//int num1 = 10;
	//int num2 = 20;
	//int max; // ����һ�������������ֵ��

	//if (num1 > num2) {
	//	// ���ֵ��num1
	//	max = num1;
	//} else {
	//	// ���ֵ��num2
	//	max = num2;
	//}

	//cout << "max : " << max << endl;

	// b.�ж�һ����������������ż�������������������ż����
	/*int num = 11;
	if (num % 2 == 0) {
		cout << "ż��" << endl;
	}
	else {
		cout << "����" << endl;
	}*/

	// c.��ȡ�������е����ֵ
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int max;

	if (num1 > num2) {
		if (num1 > num3) {
			// ���ֵ��num1
			max = num1;
		}
		else {
			// ���ֵ��num3
			max = num3;
		}
	}
	else {
		if (num2 > num3) {
			// ���ֵ��num1
			max = num2;
		}
		else {
			// ���ֵ��num3
			max = num3;
		}
	}

	cout << "max : " << max << endl;

	return 0;
}