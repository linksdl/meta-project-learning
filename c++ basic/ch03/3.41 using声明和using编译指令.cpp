#include <iostream>
using namespace std;	// ��ʾ����ʹ��std������ƿռ��µ����е����ơ�

/*
	using���� �� using����ָ��: �򻯶����ƿռ������Ƶ�ʹ�á�
	using������ʹ�ض��ı�ʶ�����á�
	using����ָ����������ƿռ��е����ƿ��á�

	using����������ֲ�������using����ͬʱʹ�û�������⡣
	using����ָ��������ͬ���ı��������ᱨ��ʹ�þͽ�ԭ��
*/

// ����һ�����ƿռ�fun
namespace fun {
	int num = 1;
	double d = 1.99;
}

namespace fun1 {
	int num = 1;
	double d = 1.99;
}


int main() {

	/*cout << fun::num << endl;
	cout << fun::d << endl;*/

	// int num = 2;

	// using ����
	/*using fun::num;
	cout << num << endl;*/

	// using ����ָ��
	using namespace fun;	// ��fun��������ƶ�����
	using namespace fun1;
	cout << fun::num << endl;

	return 0;
}


