#include <iostream>
using namespace std;

// ����һ���곣��
#define MAX 1024	// �곣��	MAX��Ϊ���ų���

// ����һ���꺯��
#define GETSUM(x, y) ((x)+(y))	// �꺯��

int getSum(int x, int y) {
	return x + y;
}

// �꺯�����꺯������ʹ�ú궨�嶨������ĺ��������������������ϵĺ�����
int main() {

	// ʹ�ú곣��
	// cout << MAX << endl;		// cout << 1024 << endl;
	// cout << MAX + 1 << endl;	// cout << 1024 + 1 << endl;

	// ʹ�ú꺯��
	int a = 10;
	int b = 20;
	cout << GETSUM(a, b) * 5 << endl;	// cout << ((a)+(b)) * 5 << endl;

	// ʹ�ú꺯����ע�����Ҫ��֤�����������

	// �꺯����ʹ�ó�����Ƶ�����úͶ�С�ĺ�������װ�ɺ꺯����
	// ʹ�ú꺯�����ŵ㣺�Կռ任ʱ�䡣

	return 0;
}