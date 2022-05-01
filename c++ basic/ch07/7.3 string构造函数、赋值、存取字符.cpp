#include <iostream>
using namespace std;

/*

����:
string();//����һ���յ��ַ��� ����: string str;      
string(const string& str);//ʹ��һ��string�����ʼ����һ��string����
string(const char* s);//ʹ���ַ���s��ʼ��
string(int n, char c);//ʹ��n���ַ�c��ʼ�� 

��ֵ��
string& operator=(const char* s);//char*�����ַ��� ��ֵ����ǰ���ַ���
string& operator=(const string &s);//���ַ���s������ǰ���ַ���
string& operator=(char c);//�ַ���ֵ����ǰ���ַ���
string& assign(const char *s);//���ַ���s������ǰ���ַ���
string& assign(const char *s, int n);//���ַ���s��ǰn���ַ�������ǰ���ַ���
string& assign(const string &s);//���ַ���s������ǰ�ַ���
string& assign(int n, char c);//��n���ַ�c������ǰ�ַ���
string& assign(const string &s, int start, int n);//��s��start��ʼn���ַ���ֵ���ַ���


*/

// ����
void test01() {
	string str1;
	string str2 = str1;
	// string str2(str1);
	string str3 = "abcd";
	// string str3("abcd");
	string str4(5, 'a');

	cout << "str3 = " << str3 << endl;
	cout << "str4 = " << str4 << endl;

	// ��ֵ
	string str5;
	str5.assign("abcdefghi", 6);
	cout << "str5 = " << str5 << endl;	// abcdef

	// string& assign(const string & s, int start, int n);//��s��start��ʼn���ַ���ֵ���ַ���
	string str6;
	str6.assign(str5, 1, 3);	// bcd
	cout << "str6 = " << str6 << endl;

}

/*
char& operator[](int n);//ͨ��[]��ʽȡ�ַ�
char& at(int n);//ͨ��at������ȡ�ַ�
*/

void test02() {
	string str = "hello world";

	//for (int i = 0; i < str.size(); i++) {
	//	// cout << str[i] << endl;
	//	cout << str.at(i) << endl;
	//}

	// [] �� at ����[]����Խ�磬����ֱ����ֹ��at����Խ�磬�׳��쳣 out_of_range
	// cout << str[100] << endl;
	try {
		cout << str.at(100) << endl;
	}
	catch (out_of_range e) {
		cout << e.what() << endl;
	}
}


// string�Ĺ��졢��ֵ����ȡ�ַ�
int main() {

	test02();

	return 0;
}