#include <iostream>
#pragma warning(disable:4996)
using namespace std;

/*
	������Ĭ�ϻ��һ�������4������
	���캯������ʵ�֣� ������������ʵ�֣� �������죨ֵ������ operator= (ֵ����)
*/

class Person {
public:

	char* m_Name;	// ����

	Person& operator=(const Person& p) {

		// ���ж���������Ƿ������ݣ���������ͷ�
		if (m_Name != nullptr) {
			delete[] m_Name;
			m_Name = nullptr;
		}

		m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(m_Name, p.m_Name);

		return *this;
	}

	Person() {
		cout << "Person��Ĭ�Ϲ���" << endl;
	}

	Person(const char* name) {
		cout << "Person���вι���" << endl;
		m_Name = new char[strlen(name) + 1];
		strcpy(m_Name, name);
	}

	Person(const Person& p) {
		m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(m_Name, p.m_Name);
	}

	~Person() {
		cout << "Person����������" << endl;
		if (m_Name != nullptr) {
			delete[] m_Name;
			m_Name = nullptr;
		}
	}
};

// ��ֵ���������  =
int main() {

	Person p1("Tom");
	Person p2;
	Person p3("Jerry");

	p2 = p1 = p3;

	cout << "p1��������" << p1.m_Name << endl;
	cout << "p2��������" << p2.m_Name << endl;

	Person p4(p3);


	return 0;
}