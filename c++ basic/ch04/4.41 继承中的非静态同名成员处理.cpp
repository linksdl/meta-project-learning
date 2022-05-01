#include <iostream>
using namespace std;

// ����
class Base {
public:

	Base() {
		this->m_A = 10;
	}

	void func() {
		cout << "Base...func()" << endl;
	}

	void func(int a) {
		cout << "Base...func(int a)" << endl;
	}

	int m_A;
};

class Son :public Base {

public:

	Son() {
		this->m_A = 20;
	}

	void func() {
		cout << "Son...func()" << endl;
	}

	int m_A;

};

// �̳��еķǾ�̬ͬ����Ա����
int main() {

	// �����������
	Base b;
	cout << b.m_A << endl;	// 10

	// �����������
	Son s;
	cout << s.m_A << endl;	// 20

	s.func();
	// �������͸������ͬ���ĳ�Ա����ôͨ���������ȥ����ͬ���ĳ�Ա�����ʵ��������еġ�

	// ͨ�����������ʸ����е�ͬ���ķǾ�̬��Ա����Ҫ����������
	cout << s.Base::m_A << endl;
	s.Base::func();

	// ��������г����˺͸���ͬ���ĳ�Ա����������ĳ�Ա���������ص�����������ͬ���ĳ�Ա������
	// �����ض��常��ĳ�Ա�����������Ҫ���ø�����ͬ���ĳ�Ա�������������������
	// s.func(10);
	s.Base::func(10);

	// func(double d){ d * 2 }  func(int i){ i * 3 }
	// s.func(2);

	return 0;
}