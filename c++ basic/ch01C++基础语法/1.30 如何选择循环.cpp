#include <iostream>

using namespace std;


// ���ѡ��ѭ��
int main() {

	// ʹ������ѭ���ֱ�ѭ��3��
	/*for (int i = 0; i < 3; i++) {
		cout << i << endl;
	}*/
	// cout << i << endl;

	int i = 0; 
	while (i < 3) {
		cout << i << endl;
		i++;
	}
	cout << i << endl;

	int j = 0;
	do {
		cout << j << endl;
		j++;
	} while (j < 3);

	// �ܽ᣺
	/*
		1.��Ҫʹ�ó�ʼ�������ı�������ô����ѡ��while����do while��
		2.ѭ�������̶�������ʹ��forѭ����
	*/
	
	return 0;
}