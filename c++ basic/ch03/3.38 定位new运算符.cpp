#include <iostream>
using namespace std;
#include <new>

/*
	��̬�洢�����ԣ���̬�ڴ�����new��delete��������п��ƣ���������������������Թ�����п���
	��̬�ڴ���Զ��ڴ治ͬ��������LIFO��

	1.ʹ��new��������г�ʼ��
	2.newʧ�ܣ����ؿ�ָ�룬����һ���쳣  std::bad_alloc
	3.�����new �� new []�ֱ�������µĺ�����
		void * operator new(std::size_t) 
		void * operator new[](std::size_t)
	�����delete��delete []:
		void * operator delete(void *)
		void * operator delete[](void *)
	����������أ�

	int *pi = new int;	// int *pi = new(sizeof(int))

	4.��λnew�����  ����new 

*/
const int N = 4;
char buffer[512];

int main() {

	double * pd1 = new double[N];			// ʹ�ö��ڴ�
	double * pd2 = new (buffer) double[N];	// ʹ�õ���buffer���ڴ�

	for (int i = 0; i < N; i++) {
		pd2[i] = pd1[i] = i;
	}
	
	cout << pd1 << "\t" << (void *)buffer << endl;

	for (int i = 0; i < N; i++) {
		cout << pd1[i] << " �ĵ�ַ��" << &pd1[i] << "; ";
		cout << pd2[i] << " �ĵ�ַ��" << &pd2[i] << endl;
	}

	cout << "=======================" << endl;

	double* pd3 = new double[N];			
	double* pd4 = new (buffer) double[N];

	for (int i = 0; i < N; i++) {
		pd4[i] = pd3[i] = i * 2;
	}

	for (int i = 0; i < N; i++) {
		cout << pd3[i] << " �ĵ�ַ��" << &pd3[i] << "; ";
		cout << pd4[i] << " �ĵ�ַ��" << &pd4[i] << endl;
	}

	cout << "=======================" << endl;

	delete[] pd1;
	pd1 = new double[N];
	pd2 = new (buffer + N * sizeof(double)) double[N];

	for (int i = 0; i < N; i++) {
		pd2[i] = pd1[i] = i * 3;
	}

	for (int i = 0; i < N; i++) {
		cout << pd1[i] << " �ĵ�ַ��" << &pd1[i] << "; ";
		cout << pd2[i] << " �ĵ�ַ��" << &pd2[i] << endl;
	}

	delete[] pd1;
	delete[] pd3;

	// ��̬����һ��int���͵�����
	/*int* pi = new int(6);
	cout << *pi << endl;
	double* pd = new double(9.99);*/
	// ����ͽṹ�����ݣ���Ҫʹ���б��ʼ�����г�ʼ����


	return 0;
}