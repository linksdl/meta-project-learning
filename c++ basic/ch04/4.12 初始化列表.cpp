#include <iostream>
using namespace std;

/*
	��ʼ���б��﷨һ����������const���εĳ�Ա���г�ʼ����
	�����������͵ĳ�Ա��Ҳ����ʹ�ó�ʼ���б���﷨���г�ʼ����
*/
class Person {
public:
	int m_A;
	int m_B;
	int m_C;

	const int m_D;

	//Person() {
	//	m_A = 0;
	//	m_B = 0;
	//	m_C = 0;
	//	// m_D = 100;
	//}

	

	// ��ʼ���б���﷨
	Person() : m_A(10), m_B(20), m_C(30), m_D(40) {
	}

	Person(int a, int b, int c, int d) : m_A(a), m_B(b), m_C(c), m_D(d) {
	}

};

// ��ʼ���б� ��һ���﷨�������Գ�Ա���ݽ��г�ʼ����
int main() {

	// Person p;
	
	Person p(100, 200, 300, 1000);
	cout << p.m_A << endl;
	cout << p.m_B << endl;
	cout << p.m_C << endl;
	cout << p.m_D << endl;

	return 0;
}