#include <iostream>

using namespace std;

// ��ʾ��Ԫ�����
int main() {

	/*
		��Ԫ������ĸ�ʽ��
			��ϵ���ʽ �� ���ʽ1 : ���ʽ2
	*/

	//cout << "�������һ��������" << endl;

	//// ��ȡ�������е����ֵ
	//int num1 = 10;
	//int num2 = 20;

	//cin >> num1;

	//cout << "������ڶ���������" << endl;

	//cin >> num2;

	//int max = num1 > num2 ? num1 : num2;
	//cout << "���ֵΪ��" << max << endl;

	// ��ȡ�������е����ֵ
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	// 1.��ȡnum1 ��num2�����ֵ
	int tempMax = num1 > num2 ? num1 : num2;

	// 2.�øոջ�ȡ�������ֵ����num3���бȽ�
	int max = tempMax > num3 ? tempMax : num3;

	cout << "�����������ֵ�ǣ�" << max << endl;

	return 0;
}