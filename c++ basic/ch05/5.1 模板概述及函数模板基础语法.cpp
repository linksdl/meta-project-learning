#include <iostream>
using namespace std;

// ʵ�������������ֵĽ���
void mySwapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
// ʵ�����������������ֵĽ���
void mySwapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

// ʹ�ú���ģ��ʵ��ͨ�õĽ���
// ����ģ����Խ����Ͳ�����
template<typename T> // T����ͨ�õ��������ͣ����߱���������������T���ͣ���Ҫ����
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void fun() {

}


int main() {

	int a = 10;
	int b = 20;
	mySwap(a, b);	// �Զ������Ƶ�
	cout << "a : " << a << " , b : " << b << endl;

	char c = 'c';
	// mySwap(a, c); �����Ƶ���һ�µ�T���ͣ��ſ���ʹ��ģ��

	// ��ʾָ������
	mySwap<int>(a, b);

	double d1 = 1.1;
	double d2 = 2.2;
	mySwap(d1, d2);
	cout << "d1 : " << d1 << " , d2 : " << d2 << endl;

	// fun();	// ģ�����Ҫȷ����T�����ͣ��ſ���ʹ��
	fun<int>();


	return 0;
}