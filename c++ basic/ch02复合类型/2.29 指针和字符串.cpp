#include <iostream>
using namespace std;

// ָ����ַ���
int main() {

	// ����һ���ַ���
	char flower[10] = "rose";
	cout << flower << "s are red" << endl;

	const char* p_flower = "rose";
	cout << p_flower << endl;

	/*char ch = 'A';
	char* p_ch = &ch;
	cout << p_ch << endl;*/

	//int arr[] = { 1,2,3 };
	//cout << arr << endl;	// 00AFF6D8 ������ǵ�ֵַ��

	// ������flower����Ԫ�صĵ�ַ��Ҳ����r�ַ��ĵ�ַ��
	// ��cout�����ڴ����ַ���ַ��ʱ�򣬲��Ǵ�ӡ��ַ�����Ǵ�ӡ�����ַ��Ӧ���ַ������ݡ�
	// ���������ַ�������Ҳ���Ǽ����������������ַ������ݣ�ֱ���������ַ�'\0'������

	// �ַ������������ַ��������ص�ֵ���׸�Ԫ�أ��ַ����ĵ�ַ��
	// ��cout �У�char��������charָ���Լ��������������ַ���������������Ϊ�ַ�������һ���ַ��ĵ�ַ��


 
	return 0;
}