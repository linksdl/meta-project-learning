#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

class Person {
public:
	char* m_Name;	// ����
	int m_Age;		// ����

	Person() {
		m_Name = nullptr;
		m_Age = 0;
	}

	Person(const char* name, int age) {
		cout << "�вι��캯��ִ����..." << endl;
		m_Name = new char[strlen(name) + 1];
		strcpy(m_Name, name);
		m_Age = age;
	}

	Person(const Person& p) {
		m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(m_Name, p.m_Name);
		m_Age = p.m_Age;
	}

	~Person() {
		cout << "��������ִ����..." << endl;
		if (m_Name != nullptr) {
			delete[] m_Name;
			m_Name = nullptr;
		}
	}

};

// �����ǳ����
int main() {

	Person p1("Tom", 20);
	cout << "p1��������" << p1.m_Name << "  p1�����䣺" << p1.m_Age << endl;
	
	Person p2 = p1;	// Person p2 = Person(p1);
	cout << "p1��������" << p1.m_Name << "  p1�����䣺" << p1.m_Age << endl;
	
	return 0;
}