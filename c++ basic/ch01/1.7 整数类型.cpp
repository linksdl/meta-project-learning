#include <iostream> 
#include <climits>

using namespace std;

int main() {

	// ������������������
	cout << 20 << endl;
	cout << 3.14 << endl;
	cout << true << endl;

	// �������������ֱ�����ʽ��ʮ���ơ�ʮ�����ơ��˽��ƣ�
	cout << 20 << endl;
	cout << 0x20 << endl;
	cout << 020 << endl;

	// ����һ��int���͵ı�������ʼ��
	int num = 30;
	int num1(40);

	cout << num1 << endl;

	// int int_max = INT_MAX + 1;
	// cout << int_max << endl;

	cout << 30L << endl;
	cout << 30ll << endl;
	cout << 30ul << endl;
	// unsigned Ĭ�Ͼ���unsigned int����д

	return 0;
}