#include <iostream>
using namespace std;

// ����
class Base {
public:
	Base() {
		cout << "Base�Ĺ��캯��" << endl;
	}
	~Base() {
		cout << "Base����������" << endl;
	}
};

// ������
class Other {
public:
	Other() {
		cout << "Other�Ĺ��캯��" << endl;
	}
	~Other() {
		cout << "Other����������" << endl;
	}
};

// ������
class Son :public Base {
public:
	Son() {
		cout << "Son�Ĺ��캯��" << endl;
	}
	~Son() {
		cout << "Son����������" << endl;
	}
	Other other;
};

class Base1 {
public:

	Base1(int a) {
		this->m_A = a;
		cout << "Base1���вι��캯��" << endl;
	}

	~Base1() {
		cout << "Base1����������" << endl;
	}

	int m_A;
};

class Son1 :public Base1 {

public:

	Son1() : Base1(10){
		cout << "Son1�Ĺ��캯��" << endl;
	}

	Son1(int b) : Base1(b) {
		this->m_B = b;
		cout << "Son1�Ĺ��캯��" << endl;
	}

	~Son1() {
		cout << "Son1����������" << endl;
	}

	int m_B;
};


// �̳��еĹ��캯������������
/*
	�����������ʱ�����ȵ��ø���Ĺ��캯�����Ը�������ݽ��г�ʼ����
	�ٵ������ݳ�Ա�Ĺ��캯�������ݳ�Ա���г�ʼ����
	Ȼ���������Ĺ��캯�����������ݽ��г�ʼ����
	������˳��͹����˳���෴��

	����Ĺ��캯������ʹ�ø���Ĺ��캯���Ը������ݽ��г�ʼ����
	����Ĺ��캯����Ĭ��ʹ�ø����Ĭ�Ϲ��캯���Ը������ݽ��г�ʼ����
	���ø���Ĺ��캯�����ڵ������๹�캯��֮ǰ��ʹ�ó�Ա��ʼ���б��﷨��ɡ�

*/
int main() {

	// �����������
	Son s;

	Son1 s1(20);
	cout << s1.m_A << endl;
	cout << s1.m_B << endl;

	return 0;
}