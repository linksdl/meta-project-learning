#include <iostream>
using namespace std;

// extern "C" ����;������ C �� C++ ����Ͽ�����
/*
	���� C �� C++ �������Ĳ�ͬ���� C �� C++ ��Ͽ�����ʱ�򣬿��ܻᾭ��ʹ�õ� extern "C"��
*/

//extern "C" int add(int, int);	// int __cdecl add(int,int)" (?add@@YAHHH@Z)
//extern "C" int sub(int, int);
//extern "C" int divide(int, int);

extern "C" {
	#include "math.h"
}

int main() {
	
	/*
		ƽʱ�������������Ĺ����У���ʹ�õ�һЩ�������Ŀ��\�⣺����ʹ��C���Ա�д�������ǿ�Դ�ġ�
		����ģ�⿪��һ���������Ŀ⣺��ѧ������صĿ⡣
	*/

	// ʹ����ѧ�����
	cout << add(10, 20) << endl;
	cout << sub(20, 10) << endl;

	return 0;
}