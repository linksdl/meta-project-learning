#include <iostream>
using namespace std;

/*
string& insert(int pos, const char* s); //�����ַ���
string& insert(int pos, const string& str); //�����ַ���
string& insert(int pos, int n, char c);//��ָ��λ�ò���n���ַ�c
string& erase(int pos, int n = npos);//ɾ����Pos��ʼ��n���ַ� 
*/
void test01() {
	// ����
	string str = "hello";
	str.insert(2, "22");
	cout << str << endl;	// he22llo

	// ɾ��
	str.erase(2,2);
	cout << "===" << str << "===" << endl;
}

void dowork(const char* str) {

}
void dowork1(string str) {	// string str = "hello";

}

// string �� c-style �ַ���ת��
void test02() {
	const char* str = "hello";
	// const char * ת����string
	string str2(str);	// string str2 = string(str);
	string str3 = "hello";

	// string ת const char *
	const char * s = str2.c_str();

	// dowork(str2);
	dowork(str2.c_str());

	dowork1(str);
}

// ��Сдת��
void test03() {
	string str = "abcDEfG";
	for (int i = 0; i < str.size(); i++) {
		// str[i] = toupper(str[i]);
		str[i] = tolower(str[i]);
	}
	cout << str << endl;
}

// �ַ������·����ڴ����ʹ��ԭ�������ÿ��ܻᷢ������
void test04() {

	string s = "abcdefg";

	char& a = s[2];
	char& b = s[3];

	a = '1';
	b = '2';
	cout << s << endl;
	cout << (int*)s.c_str() << endl;

	s = "pppppppppppppppppppp";

	// a �� b ������ʹ����
	//a = '1';
	//b = '2';
	cout << s << endl;
	cout << (int*)s.c_str() << endl;

}


// string �����ɾ����string��c�ַ���ת������Сдת��
int main() {

	test04();

	return 0;
}