#include <iostream>

using namespace std;

/*
	��ʼ���������
	do {
		ѭ�������;
		�����������;
	} while (�ж��������);
*/
int main() {

	// �򵥵�ʹ��
	//int i = 1;
	//do {
	//	cout << "HelloWorld" << endl;
	//	i++;
	//} while (i <= 10);

	// ����������¼��һ��������ͳ�Ƴ����������λ����
	// whileѭ�����
	/*cout << "������һ��������" << endl;
	int num;
	cin >> num;

	int len = 0;
	if (num == 0) {
		len = 1;
	}
	else {
		while (num != 0) {
			len++;
			num /= 10;
		}
	}
	cout << len << endl;*/


	// do while���
	cout << "������һ��������" << endl;
	int num;
	cin >> num;

	int len = 0;
	
	do {
		num /= 10;
		len++;
	} while (num != 0);

	cout << len << endl;

	return 0;
}