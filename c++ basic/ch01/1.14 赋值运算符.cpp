#include <iostream> 

using namespace std;

// ��ʾ�ĸ�ֵ�����
// = �� += �� -= �� /=�� *= �� %=
int main() {

	int i = 10;
	int y = 20;

	i = y;

	// ��������������������ֵ
	int a = 10;
	int b = 20;
	int temp = a;
	a = b;
	b = temp;

	cout << "a: " << a << " b: " << b << endl;

	// ע�����=��߱����Ǳ���
	// 10 = a;  // �����

	// �������� +=
	int num1 = 12;
	int num2 = 8;

	// num1 += num2;  // num1 = num1 + num2;
	// cout << "num1��" << num1 << endl;

	// ע�������������������ұ߿���һ������
	// num1 += num2 * 10;	// num1 = num1 + (num2 * 10)
	// cout << "num1��" << num1 << endl;

	num1 *= num2 + 1;	// num1 = num1 * (num2 + 1)
	cout << "num1��" << num1 << endl;	// 108

	return 0;
}