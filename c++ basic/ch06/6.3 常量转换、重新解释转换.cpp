#include <iostream>
using namespace std;

class Base {

};

class Other {

};


// ����ָ��ͷǳ���ָ��ת��
void test01() {

	// ����ָ��->�ǳ���ָ��
	const int* p = nullptr;
	int *np = const_cast<int*>(p);

	// �ǳ���ָ��->����ָ��
	int* pp = nullptr;
	const int * npp = const_cast<const int*>(pp);

	const int a = 10;
	// const_cast<int>(a);	// ���ܶԷ�ָ����߷����ý���ת��

}

// �������úͷǳ�������ת��
void test02() {

	int num = 10;
	int& ref_num = num;

	const int & refNum2 = const_cast<const int&>(ref_num);
	int& refNum3 = const_cast<int&>(refNum2);

}


// ���½���ת�� reinterpret_cast
void test03() {
	
	int a = 10;
	int * p = reinterpret_cast<int*>(a);
	// double ch = reinterpret_cast<double>(a);

	double* ch = reinterpret_cast<double*>(a);
	double ch = reinterpret_cast<double&>(a);

	Base* base = nullptr;
	Other* other = reinterpret_cast<Other*>(base);

}


// ����ת��const_cast�����½���ת�� reinterpret_cast
int main() {



	return 0;
}