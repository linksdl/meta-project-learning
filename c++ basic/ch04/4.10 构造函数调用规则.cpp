#include <iostream>
using namespace std;

// ���캯���ĵ��ù���
/*
	Ĭ������£�C++���������ٻ�Ϊ�����ṩ���3������
		1.Ĭ�Ϲ��캯�����޲Σ� ������Ϊ�գ�
		2.Ĭ�������������޲Σ� ������Ϊ�գ�
		3.Ĭ�Ͽ������캯���������зǾ�̬��Ա���Խ��м򵥵�ֵ����

	����û���������ͨ�Ĺ��죨�ǿ������죩��C++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ������졣
	����û������˿������캯����C++�����ṩ�κ�Ĭ�Ϲ��캯��

*/

class Person {

public:
	int m_Age;	// ����

	Person() {

	}

	Person(int age) {
		m_Age = age;
	}

	Person(const Person& p) {
		m_Age = p.m_Age;
	}

	~Person() {

	}

};


int main() {

	// ��������
	Person p1;
	Person p2 = p1;	// Person p2 = Person(p1);
	cout << p2.m_Age << endl;

	return 0;
}