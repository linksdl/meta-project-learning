#include <iostream> 

using namespace std;

// ��ʾ�߼������
int main() {

	// && || !
	cout << (7 > 5 && 6 < 10) << endl;
	cout << (7 < 5 && 6 < 10) << endl;

	// 7 < 5 && 20;
	// һ��������3 С��6
	int x = 10;
	bool flag = (3 < x < 6);
	cout << flag << endl;

	flag = x > 3 && x < 6;
	cout << flag << endl;

	//  && �� || ���ж�·��Ч��
	int num1 = 10;
	int num2 = 20;

	flag = num1 < num2 && num2++ > 5;
	cout << "num1 : " << num1 << " num2 : " << num2 << endl;

	return 0;
}