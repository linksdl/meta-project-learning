#include <iostream>
using namespace std;

// �ݹ�
/*
	�������嵱�е��ú�����������󣬳�֮Ϊ�ݹ顣
	�ݹ��������˼·����ֺͺϲ���

	ʹ�õݹ��ע�����
		1.�ݹ�һ��Ҫ�г��ڡ���Ȼ��������ݹ顣Stack Overflow ջ�ڴ�����Ĵ���
		2.�ݹ�Ĵ������ܹ��ࡣ

*/

long jiecheng(int n) {
	// ����һ���ۻ�����
	int ji = 1;
	for (int i = 1; i <= 5; i++) {
		ji = ji * i;
	}
	return ji;
}

// ʹ�õݹ�ķ�ʽ�����n�Ľ׳ˡ�
long long jiecheng1(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n* jiecheng1(n - 1);
	}
}

void show() {
	show();
}

int main() {

	// ����5!
	cout << jiecheng1(20) << endl;

	// show();

	return 0;
}






