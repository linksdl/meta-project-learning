#include <iostream>

using namespace std;

int main() {

	cout << (3 & 5) << endl;
	cout << (3 | 5) << endl;
	cout << (-3 ^ 5) << endl;
	cout << (~-5) << endl;

	int a = 4;
	int res = a << 2;
	cout << res << endl;

	res = a >> 2;
	cout << res << endl;

	// һ������λ�����һ����2�Σ��õ�����
	int x = 10;
	int y = 20;
	int z = x ^ y ^ x;
	cout << z << endl;

	// ��������������
	x = x ^ y;	// x = 10 ^ 20;
	y = x ^ y;	// y = 10 ^ 20 ^ 20; = 10
	x = x ^ y;	// x = 10 ^ 20 ^ 10; = 20
	cout << x << "  " << y << endl;

	return 0;
}