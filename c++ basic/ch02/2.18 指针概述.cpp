#include <iostream>
using namespace std;

// ��ȡ�����ĵ�ַ
int main() {

	int num = 10;

	cout << &num << endl;
	cout << sizeof(&num) << endl;
	// ��ͬһ��ƽ̨�ϣ����еĵ�ַ��ռ�Ŀռ��С��һ���ġ�
	// 32λ��ϵͳ����32λ���룬4���ֽ�
	// 64λ��ϵͳ����64λ���룬8���ֽ�


	return 0;
}