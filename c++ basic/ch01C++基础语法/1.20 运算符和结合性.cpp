#include <iostream>

using namespace std;

int main() {

	// ���ȼ��İ���
	int a = 8;

	a += a -= a *= a /= 2;
	// a = a / 2 = 4
	// a = a * 4 = 16
	// a = a - 16 = 0
	// a = a + 0

	cout << a << endl;	// 0

	// ���������:������ʽ�����ö��ŷֿ������ű��ʽ��ֵ���������ʽ�е����һ�����ʽ��ֵ��
	int b = 10, c = 20;

	int num = 0;
	num = 1, 2, 3, 4;
	cout << num << endl;

	num = (1, 2, 3, 4);
	cout << num << endl;

	return 0;
}