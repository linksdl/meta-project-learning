#include <iostream>
#pragma warning(disable:4996)
using namespace std;

// �ַ����и��
/*
	char * strtok(char * str, const char * delim);
*/
int main() {

	// sub 10 20
	// add 10 20
	char buf[30] = "sub 10 20";
	char* msg[30] = { buf, nullptr };

	// �����и�
	//// ��һ���и�
	//int i = 0;
	//msg[i] = strtok(buf, " ");
	//cout << msg[i] << endl;

	//// �ڶ����и�
	//i = 1;
	//msg[i] = strtok(nullptr, " ");
	//cout << msg[i] << endl;

	//// �������и�
	//i = 2;
	//msg[i] = strtok(nullptr, " ");
	//cout << msg[i] << endl;

	// ʹ��ѭ�������Ż�
	/*int i = 0;
	msg[i] = strtok(buf, " ");

	while (msg[i] != nullptr) {
		i++;
		msg[i] = strtok(nullptr, " ");
	}*/

	int i = 0;

	while ((msg[i] = strtok(msg[i], " ")) && ++i);


	// ��������
	int j = 0;
	while (msg[j] != nullptr) {
		cout << msg[j] << endl;
		j++;
	}

	return 0;
}