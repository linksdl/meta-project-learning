#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

// �ַ��������� - �ַ���������ƴ��
int main() {

	// 1. strlen()  ��ȡ�ַ����ĳ��ȣ��ַ��ĸ�����
    // size_t ���� typedef unsigned int
	size_t count = strlen("hello");
	cout << count << endl;

	// 2.char * strcpy(char * dest, const char * src);
	char dest[15] = "";
    //#pragma warning(disable:4996)
	char * res = strcpy(dest, "hello");
	cout << res << endl;
	cout << dest << endl;

	// 3. strncpy
	res = strncpy(dest, "helloworld", 6);
	cout << res << endl;
	cout << dest << endl;

	// 4. char * strcat(char * dest, const char * src); // �ַ�������
	/*res = strcat(dest, "orld");
	cout << res << endl;
	cout << dest << endl;*/

	// 5. strncat
	res = strncat(dest, "orld", 2);  // �����ַ�������
	cout << res << endl;
	cout << dest << endl;


	return 0;
}