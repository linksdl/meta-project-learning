#include <iostream>
using namespace std;

// �ַ���ָ�����  ��  �ַ������ַ����飩����
int main() {

	// �ַ���ָ�����
	const char* str1 = "hello world";
	cout << sizeof(str1) << endl; // 4

	cout << *str1 << endl; // h
	cout << *(str1 + 1) << endl; // e
	// *str1 = 'H';	  // ����ģ����ֳ�����ֻ��
	// str1++; str1 = str1 + 1;


	// �ַ������ַ����飩
	char str2[] = "hello world";
	cout << str2 << endl;
	cout << sizeof(str2) << endl; // 12
	*str2 = 'H';
	cout << str2 << endl;
	// str2++;  //  ����++ �����޸ĵ���ֵ
	/*char* p = str2; // Hello world
	p++;*/   //


	// ����
	// �ַ���ָ�����
	// str1 ��������ջ�����ٿռ䣬"hello world"�����ֳ��������ٿռ�
	// str1 ��������"hello world"��Ԫ�صĵ�ַ�������ַ�����������
	// str1 ���ܶ�"hello world ���ݽ����޸ģ�д�Ĳ�����"
	// str1 �����Ǳ���������++

	// �ַ������ַ����飩
	// str2���ݳ�ʼ���ַ����Ĵ�С���ٿռ䣬����ֱ�Ӵ洢���ַ���������
	// ����ͨ��str2��"helloworld"����д������
	// str2������������һ�����ų���������++

	return 0;
}