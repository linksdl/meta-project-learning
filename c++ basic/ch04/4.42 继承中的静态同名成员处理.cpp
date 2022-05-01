#include <iostream>
using namespace std;

// ����
class Base {

public:

	// ����ʱ��ͷ�������ڴ棬������ж��󶼹������������������ʼ��
	static int m_A;

	static void func() {
		cout << "Base...func()" << endl;
	}

	static void func(int a) {
		cout << "Base...func(int a)" << endl;
	}

};

int Base::m_A = 10;	// ��ʼ����̬��Ա����

// ������
class Son :public Base {

public:

	static int m_A;

	static void func() {
		cout << "Son...func()" << endl;
	}

};
int Son::m_A = 20;


// �̳��еľ�̬ͬ����Ա����
int main() {

	// �����������
	Son s;
	cout << s.m_A << endl;

	// ���ʸ����еľ�̬�ĳ�Ա��������Ҫ����������
	cout << "Base... m_A : " << s.Base::m_A << endl;
	cout << "Son...m_A : " << s.Son::m_A << endl;

	// ����ͬ���ľ�̬�ĳ�Ա����
	s.func();
	s.Son::func();
	s.Base::func();
	
	// �������ض��常���е�ͬ����func�󣬸����е����е�ͬ��func���ᱻ���ء�
	// �����Ҫ���ã��������������
	// s.func(10);
	s.Base::func(10);


	// ͨ������ȥ���ʾ�̬�ĳ�Ա
	// ��̬��Ա����
	cout << Son::m_A << endl;
	cout << Base::m_A << endl;
	cout << Son::Base::m_A << endl;
	// ��һ��Son��ʾ����Son�ĳ�Ա��Base��ʾ������

	// ��̬�ĳ�Ա����
	Son::func();
	Base::func();
	Son::Base::func();


	return 0;
}