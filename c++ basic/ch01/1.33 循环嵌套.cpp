#include <iostream>

using namespace std;

int main() {

	// 1. ��ӡ4��5�е�����ͼ
	/*
		*****
		*****
		*****
		*****
	*/

	/*cout << "*";
	cout << "*";
	cout << "*";
	cout << "*";
	cout << "*";*/

	/*for (int i = 1; i <= 5; i++) {
		cout << "*";
	}
	cout << endl;

	for (int i = 1; i <= 5; i++) {
		cout << "*";
	}
	cout << endl;

	for (int i = 1; i <= 5; i++) {
		cout << "*";
	}
	cout << endl;

	for (int i = 1; i <= 5; i++) {
		cout << "*";
	}
	cout << endl;*/

	for (int j = 1; j <= 4; j++) {
		for (int i = 1; i <= 5; i++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "==================" << endl;

	// �ܽ᣺���ѭ�������У��ڴ�ѭ�������С�

	/*
		��ӡ���µ���״��
		*
		**
		***
		****
		*****
	*/

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}


	return 0;
}