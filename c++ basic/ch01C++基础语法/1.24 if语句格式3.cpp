#include <iostream>

using namespace std;

// ��ʾif���ĵ����ָ�ʽ
int main() {
	/*
		����¼��һ���ɼ����жϲ�����ɼ��ĵȼ���
		  90-100 ����
		  80-89  ��
		  70-79  ��
		  60-69  ����
		  0-59   ��
	*/

	// 1.��ȡ����¼��ĳɼ�
	cout << "���������ķ�����" << endl;
	int score;
	cin >> score;

	// 2.�����жϲ�������(���Կ������������ݣ���������ݣ��ٽ�ֵ������)
	if (score > 100 || score < 0) {
		cout << "������ĳɼ�����" << endl;
	}
	else if (score >= 90 && score <= 100) {
		cout << "����" << endl;
	}
	else if (score >= 80 && score <= 89) {
		cout << "��" << endl;
	}
	else if (score >= 70 && score <= 79) {
		cout << "��" << endl;
	}
	else if (score >= 60 && score <= 69) {
		cout << "����" << endl;
	}
	else {
		cout << "��" << endl;
	}
	
	


	



	return 0;
}