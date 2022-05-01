#include <iostream>
#include <ctime>
using namespace std;

/*
	����ָ��
	�����ĵ�ַ���Ǵ洢��������Դ�����ڴ�Ŀ�ʼ��ַ��
	��������ʵ���Ǻ����ĵ�ַ��

	1.��ȡ�����ĵ�ַ  ������
	2.��������ָ��
	3.ʹ�ú���ָ��
	4.����ָ�밸��

*/
// ����һ������
int getSum(int a, int b) {
	int sum = a + b;

	for (int i = 0; i < 10000000; i++) {
		sum += i;
	}
	return sum;
}

// ����һ������
int getSum1(int a, int b) {
	int sum = a + b;

	for (int i = 0; i < 1000000000; i++) {
		sum += i;
	}
	return sum;
}

// ����һ��������������ͺ���������ʱ��
void estimate(int (*pf)(int, int)) {
	// ��ȡ��ʼ��ʱ��
	clock_t start = clock();
	// ������͵ĺ���
	(*pf)(4, 5);
	// ��ȡ������ʱ��
	clock_t end = clock();
	// ����ʱ���ֵ
	cout << end - start << endl;
}

int main() {

	estimate(getSum);
	estimate(getSum1);

	// cout << getSum << endl;
	/*int (*pf)(int, int) = getSum; // ����ָ��

	cout << pf << endl;
	int sum = (*pf)(1, 2);
	cout << sum << endl;

	sum = pf(3, 4);
	cout << sum << endl;*/

	return 0;
}