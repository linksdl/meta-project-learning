#include <iostream>
using namespace std;

// ����꺯��
#define GETSUM(a, b) ((a) + (b)) 
#define COMPARE(a, b) ((a) < (b)) ? (a) : (b)

// �꺯����ȱ��1����Ҫ�������ű�֤���������

// ����һ����ͨ�ĺ���
int compare(int a, int b) {
	return  a < b ? a : b;
}

// �������������ں��������ͺ��������϶�Ҫ����inline�ؼ��֡�
inline int fun();
inline int fun() {
	cout << "fun..." << endl;
}
/*
*	ĳЩ����������������������룺
*	1.���ܴ����κ���ʽ��ѭ�����
*	2.���ܴ��ڹ���������ж����
*	3.�����岻�ܹ����Ӵ�
*	4.���ܶԺ�������ȡ��ַ�Ĳ���
*/

// ��������:������������Ҳ��һ����ͨ�ĺ���������˺꺯����ȱ�ݡ�
int main() {
	
	/*int x = 3;
	int y = 5;
	int res = GETSUM(x, y) * 3;
	cout << res << endl;*/

	int a = 10;
	int b = 20;
	//int res = COMPARE(++a, b);	// �൱�ڣ� ((++a) < (b)) ? (++a) : (b)
	//cout << res << endl;

	int res = compare(++a, b);
	cout << res << endl;

	return 0;
}