#include <iostream> 

using namespace std;

int main() {

	// �Զ�����ת��
	short s = 12;
	int i = s;
	cout << i << endl;

	// �Ѵ���������ת��ΪС�������ͻ����������ʧ��
	int num = 20000000;
	s = num;
	cout << s << endl;  // 11520 ��ʧ������ֵ

	// char,short ... - int
	short s1 = 3;
	cout << sizeof(s1 + 'a') << endl; // 4 ת����int ����


	short num1 = 20;
	// ǿ������ת��
	long l = (long)num1;
	long l1 = long(num1);
	sizeof(long(num1));

	return 0;
}