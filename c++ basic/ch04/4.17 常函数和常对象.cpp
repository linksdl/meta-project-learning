#include <iostream>
using namespace std;

// �������ͳ�����
/*
	1.��const���γ�Ա����ʱ��const����thisָ��ָ����ڴ�����
	��Ա�������ڲ����޸ı����е��κ���ͨ��Ա����������������ǳ�֮Ϊ��������

	2.����Ա��������ǰ�汻mutable���γ���
*/

// ����
class Person {
public:

	int m_Age;	// ����

	mutable int m_Height;	// ���

	Person(int age) {
		this->m_Age = age;
	}

	// thisָ��ı���  ָ�볣��   Person* const this;
	// �������thisָ��ָ��Ķ�������ݲ��ܱ��޸ģ�const Person* const this;
	void show() const{		// ������

		// this = nullptr;
		// this->m_Age = 200;	
		this->m_Height = 180;

		cout << this->m_Age << endl;
	}

	void show1(){}

};

int main() {

	// ����һ��Person����
	Person p1(20);
	p1.show();

	// ������
	const Person p2(30);	// ������
	// p2.m_Age = 20;	// ���������޸�����
	p2.m_Height = 190;	// ����������޸�mutable���εĳ�Ա����

	p2.show();	// ��������Ե��ó�����
	// p2.show1();	// �������ܵ�����ͨ����


	return 0;
}