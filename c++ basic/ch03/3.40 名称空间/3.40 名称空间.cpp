#include <iostream>
using namespace std;
#include "fun.h"
#include "fun1.h"

// ���ƿռ䣺���Ը��õĿ������Ƶ�������
// ���ǿ����Լ��ڳ����д�����ͬ�����ƿռ䡣
// һ�����ƿռ��е����Ʋ��������һ�����ƿռ��е�ͬ�������Ʒ�����ͻ��
// ͬʱ����������������ʹ��������ƿռ��������Ķ�����
/*
	1.�������򣺾��ǿ����������н�������������
	2.Ǳ�������򣺴ӱ��������㿪ʼ������������Ľ�β��

	�����û���������ƿռ��⣬������һ�����ƿռ�-ȫ�����ƿռ䡣
	����Ӧ���ļ�������������

	a.���ƿռ�д���Ķ���������ȫ���������¡�
	b.���ƿռ��п���дʲô�����������������ṹ�塢��...��
	c.���ƿռ����Ƕ�����ƿռ�
	d.���ƿռ��ǿ��ŵġ�������ʱ����µ�����(�������ͬ�������ƿռ䣬���ϲ��Ĳ���)
	e.���ƿռ�����������ġ�
	f.���ƿռ�����б���
*/
namespace A {
	int num = 0;
	void fun();
	struct Person {};
}

namespace B {
	int num = 10;
	namespace C {
		int num = 20;
	}
}

namespace B {
	int a = 50;
}

namespace {
	int b = 20;	// ��ʽ�ļ���static
}

namespace verylongns {
	int c = 30;
}

int main() {
	
	fun::show();
	fun1::show();

	cout << B::num << endl;
	cout << B::C::num << endl;
	cout << B::a << endl;
	cout << b << endl;

	namespace sns = verylongns;
	cout << sns::c << endl;
	cout << verylongns::c << endl;

	return 0;
}