#include <iostream>
#include <cstring>
using namespace std;

// �������ַ���
// �ַ��������ֱ�ʾ��ʽ��char���飬 �ַ���������char * 
// �ַ�����Ϊ�����Ĳ���
// ���󣺱�дһ�����������ض��ַ����ַ����г��ֵĴ�����
unsigned int charCount(const char* str, char ch) {

	// ����һ��������¼����(ͳ�Ʊ�����������)
	unsigned int count = 0;

	// �����ַ����е��ַ�����ch���бȽϣ������ȵĻ�����count+1
	/*for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ch) {
			count++;
		}
	}*/
	while (*str) {
		if (*str == ch) {
			count++;
		}
		str++;
	}

	return count;

}

int main() {

	char arr[15] = "helloworld";
	const char* str = "helloworld";

	int n1 = strlen(arr);
	int n2 = strlen(str);
	int n3 = strlen("helloworld");

	cout << n1 << endl;
	cout << n2 << endl;
	cout << n3 << endl;
	cout << sizeof(arr) << endl;
	cout << sizeof(str) << endl;
	cout << sizeof("helloworld") << endl;

	cout << "================" << endl;

	unsigned int count = charCount(str, 'l');
	cout << count << endl;

	return 0;
}