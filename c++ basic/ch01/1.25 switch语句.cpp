#include <iostream>

using namespace std;

// ��ʾswitch����ʹ��
/*
	switch (���ʽ) {
	
		case ֵ1:
			�����1;
			break;
		case ֵ2:
			�����2;
			break;
		case ֵ3:
			�����3;
			break;
		...
		default:
			�����n;
			break;
	
	}
	
*/
int main() {

	// ����������¼���·ݣ������Ӧ�ļ��ڡ�
	// 3,4,5 ���� 6,7,8 ���� 9,10,11 ����  12,1,2 ����
	
	cout << "������һ���·ݣ� " << endl;
	// ����һ���·�
	int month;

	cin >> month;

	switch (month) {

		case 3:
		case 4:
		case 5:
			cout << "����" << endl;
			break;

		case 6:
		case 7:
		case 8:
			cout << "����" << endl;
			break;

		case 9:
		case 10:
		case 11:
			cout << "����" << endl;
			break;

		case 12:
		case 1:
		case 2:
			cout << "����" << endl;
			break;

		default :
			cout << "��������·�����" << endl;
			break;
	}

	/*
		1. case���������һ�������������Ǳ�����ֵ�����ظ�
		2. switch�еı��ʽ������һ����������ö������
		3. default ����ʡ�ԡ������飬λ�ò�һ��Ҫ�������
		4. break����ʡ��

		switch����if��������
			switchֻ�ܶԼ�������ֵ�����ж�
			if���Զ�һ����Χ���жϣ��������Բ������͵�ֵ�жϣ��Լ�������ֵ���жϡ�
	*/

	return 0;
}