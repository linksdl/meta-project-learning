#include <iostream>
using namespace std;

// ָ����Ϊ��������ֵ����
// ע�������Ҫ���ؾֲ������ĵ�ַ����Ϊ�ֲ�������������������Ժ���Զ��ͷ��ڴ档

// ����һ��ȫ�ֱ���
int num = 0;
// ���󣺶���һ������������num�ĵ�ַ��
int * getIntAddr() {
	return &num;  // ���ص�ַ
}

int* getIntAddr1() {
	int a = 10;
	return &a; // ���ܷ��ؾֲ�������ַ
}

// ���� ����һ������������ָ�����ַ��͸��������ַ�����
char* buildstr(char c, int n) {

	// ��̬����һ���ַ���
	char* pstr = new char[n + 1];
	pstr[n] = '\0';
	while (n-- > 0) {
		pstr[n] = c;
	}
	return pstr;
}

int main() {

	/*int* p = nullptr;
	p = getIntAddr();
	*p = 1000;
	cout << num << endl;*/

	/*int* p = getIntAddr1();
	*p = 1000;
	cout << *p << endl;*/

	// ���Ժ���
	int times;
	char ch;

	cout << "������һ���ַ���" << endl;
	cin >> ch;

	cout << "������һ��������" << endl;
	cin >> times;

	char * ps = buildstr(ch, times);
	cout << ps << endl;

	// �ͷ��ڴ�
	delete[] ps;

	ps = buildstr('+', 16);
	cout << ps << endl;
	delete[] ps;

	return 0;
}