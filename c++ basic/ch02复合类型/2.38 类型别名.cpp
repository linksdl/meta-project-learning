#include <iostream>
#include <ctime>
using namespace std;
#define BYTE char

typedef int myint;

// ���ͱ���
int main() {

	//BYTE ch = 'A';
	//cout << ch << endl;

	//// ʹ��typedef
	//myint num = 10;
	//cout << num << endl;

	// �����ó���ȴ�һ��ʱ�䡣
	// �����������ϵͳʱ����������������
	// C++ clock()  ���س���ʼִ�к����õ�ϵͳʱ�䡣

	// ���⣺1.clock()���ص�ʱ�䵥λ��һ���룬2.����ֵ������long��unsigned long
	// ctime   1.���ų��� CLOCKS_PER_SEC

	cout << "�������ӳٵ�ʱ��������" << endl;
	float secs;
	cin >> secs;

	clock_t delay = secs* CLOCKS_PER_SEC;

	cout << "��ʼ...." << endl;

	clock_t start = clock();
	while (clock() - start < delay)
		;

	cout << "ʱ�䵽�ˣ�����" << endl;

	return 0;
}