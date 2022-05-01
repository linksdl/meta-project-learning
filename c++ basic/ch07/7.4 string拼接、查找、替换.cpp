#include <iostream>
using namespace std;

/*
string& operator+=(const string& str);//����+=������
string& operator+=(const char* str);//����+=������
string& operator+=(const char c);//����+=������
string& append(const char *s);//���ַ���s���ӵ���ǰ�ַ�����β
string& append(const char *s, int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
string& append(const string &s);//ͬoperator+=()
string& append(const string &s, int pos, int n);//���ַ���s�д�pos��ʼ��n���ַ����ӵ���ǰ�ַ�����β
string& append(int n, char c);//�ڵ�ǰ�ַ�����β���n���ַ�c
*/

void test01() {
	string s1 = "hello";
	s1 += " world";
	cout << s1 << endl;

	string s2 = "nihao";
	s1.append(s2);
	cout << s1 << endl;

	s1.append(3, 'a');
	cout << s1 << endl;

	s1.append(s2, 2, 3);	
	cout << s1 << endl;

}

/*
int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
int find(const char* s, int pos = 0) const;  //����s��һ�γ���λ��,��pos��ʼ����
int find(const char* s, int pos, int n) const;  //��posλ�ò���s��ǰn���ַ���һ��λ��
int find(const char c, int pos = 0) const;  //�����ַ�c��һ�γ���λ��
int rfind(const string& str, int pos = npos) const;//����str���һ��λ��,��pos��ʼ����
int rfind(const char* s, int pos = npos) const;//����s���һ�γ���λ��,��pos��ʼ����
int rfind(const char* s, int pos, int n) const;//��pos����s��ǰn���ַ����һ��λ��
int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
string& replace(int pos, int n, const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
*/

void test02() {

	string str = "abcdefghde";

	int pos = str.find("de", 4);	// ����2 ������ʼ���ҵ�λ�ã�Ĭ��0
	// find�Ǵ������Ҳ��ң�rfind�Ǵ����������
	if (pos == -1) {
		cout << "δ�ҵ��Ӵ�" << endl;
	}
	else {
		cout << "�ҵ����Ӵ���λ�ã�" << pos << endl;
	}

	// �滻
	str.replace(1, 3, "1111");
	cout << str << endl;

}


// string��ƴ�ӡ����ҡ��滻����
int main() {

	test02();


	return 0;
}