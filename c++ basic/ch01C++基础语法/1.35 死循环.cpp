#include <iostream>

using namespace std;

// ��ѭ��
int main() {

	// 1.�����©��
	/*double d = 1;

	while (d < 2) {
		cout << "hello" << endl;
		d *= 0.2;
		cout << d << endl;
	}*/

	/*
		�����������5�׸ߵĵط���������ÿ�ε���ĸ߶���ԭ����30%��
		�������ε�������ĸ߶�С��0.1�ס�
	*/
	double high = 5.0;
	int count = 0;
	while (true) {
		if (high < 0.1) {
			break;
		}
		count++;
		high *= 0.3;
	}

	cout << count << endl;


	return 0;
}