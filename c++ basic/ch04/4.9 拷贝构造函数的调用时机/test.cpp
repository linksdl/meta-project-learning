#include <iostream>
using namespace std;

class Person {

public:
	int m_Age;

	Person() {
		m_Age = 0;
		cout << "Ĭ�Ϲ��캯��" << endl;
	}

	Person(int age) {
		m_Age = age;
		cout << "�вι��캯��" << endl;
	}

	// �������캯��
	Person(const Person & p) {
		m_Age = p.m_Age;
		cout << "�������캯��" << endl;
	}

	~Person() {
		cout << "��������" << endl;
	}

};

void doWork(Person p) {	// Person p = p1;

}

Person doWork1() {
	Person p(30);
	return p;
}

// �������캯���ĵ���ʱ��
int main() {

	// 1.��һ�������ʼ������һ������
	Person p1(10);
	// Person p2(p1);
	// cout << p2.m_Age << endl;
	// Person p3 = Person(p1);
	// cout << p3.m_Age << endl;
	// Person p4 = p1;	// Person p4 = Person(p1);
	// cout << p4.m_Age << endl;

	// 2.������ֵ���ݵķ�ʽ���ݸ���������
	// doWork(p1);

	// 3.�����ֲ�������ֵ���ݵķ�ʽ�Ӻ�������
	Person p5 = doWork1();

	/*
		�����������һ���Ż�  RVO(Return Value Optimization)
	*/

	return 0;
}