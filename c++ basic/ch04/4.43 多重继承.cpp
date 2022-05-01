#include <iostream>
using namespace std;

// ���ؼ̳У���̳У�
/*
	һ������Լ̳�����һ���࣬һ����Ҳ����ͬʱ�̳ж���࣬����Ƕ�̳С�
	��A, �̳�����B, ͬʱ�ּ̳�����C

	��̳е��﷨��
	class ���� : �̳з�ʽ ����1, �̳з�ʽ ����2 ...
	ע������̳з�ʽ��ò�Ҫʡ�ԣ����ʡ�ԣ�Ĭ����˽�м̳С�

	��̳��Ƿǳ�������ģ��Ӷ����̳п��ܻᵼ�³�Ա��������Ա����ͬ�������϶�����塣

*/

// ����1
class Base1 {
public:

	Base1() {
		this->m_A = 10;
	}

	void func() {
		cout << "Base1 ... func()" << endl;
	}

	int m_A;
};

// ����2
class Base2 {

public:

	Base2() {
		this->m_B = 20;
		this->m_A = 30;
	}

	void show() {
		cout << "Base2 ... show()" << endl;
	}

	int m_A;
	int m_B;

};


// ����	��̳У�Son�̳���Base1��Base2
class Son :public Base1, public Base2 {

public :
	int m_C;
	int m_D;
};


int main() {

	// �����������
	Son s;
	// cout << "s.m_A : " << s.m_A << endl;
	cout << "s.m_B : " << s.m_B << endl;
	s.func();
	s.show();
	// ��̳У������̳ж�������еĳ�Ա����Ա��������Ա������

	// ������������г�����ͬ���ĳ�Ա����Ҫ�����������������
	cout << "Base1::m_A : " << s.Base1::m_A << endl;
	cout << "Base2::m_A : " << s.Base2::m_A << endl;
	cout << "Base2::m_B : " << s.m_B << endl;
	cout << "Base2::m_B : " << s.Base2::m_B << endl;

	cout << "Sizeof(Son) : " << sizeof(Son) << endl;

	return 0;
}