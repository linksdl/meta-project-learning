#include <iostream>

using namespace std;

// ��ʾ��ϵ�����
int main() {

	int a = 10;
	int b = 20;
	int c = 3;

	cout << (a > b) << endl;
	cout << (a < b) << endl;
	cout << (a >= b) << endl;
	cout << (a <= b) << endl;
	cout << (a == b) << endl;
	cout << (a != b) << endl;

	cout << ((a + b) * c > (c + b) * a) << endl;

	/*
		ע�����
			1.���۱��ʽ��ô���ӣ���ϵ��������յĽ���϶���bool���͵�ֵ
			2.== ����д�� =
	*/

	// �Ȱ�b��ֵ��ֵ��a,Ȼ��a��ֵͨ��cout�����
	cout << (a = b) << endl;


	return 0;
}