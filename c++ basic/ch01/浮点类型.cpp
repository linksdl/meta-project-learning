#include <iostream>

using namespace std;

int main() {

	// ��������������
	// float ��double ��long double
	// �⼸���������ֽڴ�д��һ��������Ҳ��һ����
	double d = 3.14;
	double d1 = 0.314E1;
	double d2 = 0.00000012;
    double d3 = 0.24E5

	cout << d << endl;
	cout << d1 << endl;

	cout << 3.14 << endl;	// Ĭ����double����
	cout << 3.14f << endl;
	cout << 3.14F << endl;

	// float��double�ľ�������
	float num = 10.0 / 3.0;
	double num1 = 10.0 / 3.0;

	cout << num << endl; // 3.33333
	cout << num1 << endl;  // 3.33333

	// coutĬ�ϴ�ӡС��ֻ���6����Ч����
	cout.precision(18);

	cout << num << endl;  // 3.3333325386047363
	cout << num1 << endl; // 3.3333333333333348

	return 0;
}