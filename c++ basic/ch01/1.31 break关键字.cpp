#include <iostream>

using namespace std;

/*
	break:��ʾ�˳�ѭ��������ѭ������Ĵ���
*/
int main() {

	/*for (int i = 1; i <= 5; i++) {
		if (i == 3) {
			break;
		}
		cout << i << "\t";
	}
	cout << "over" << endl;*/

	// ����������һ������1�����������ж����ǲ���������
	int num;
	cout << "����һ������1��������: " << endl;
	cin >> num;

	// ����һ���������͵ı�����¼���
	bool flag = true;

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			flag = false;
			// �ܹ��������������ӣ��Ͳ���������
			break;
		}
	}

	if (flag) {
		cout << num << "�����������" << endl;
	}
	else {
		cout << num << "�������������" << endl;
	}

	return 0;
}