#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

/*
	����ģ��Ļ��ƣ�
	1.�����������ǰѺ���ģ�崦����ܹ������κ����͵ĺ���
	2.����ģ��ͨ����������Ͳ�����ͬ�ĺ�����ģ�庯����
	3.��������Ժ���ģ��������α��룬�������ĵط���ģ����뱾����б��룬�ڵ��õĵط�
	�Բ����滻��Ĵ�����б��롣
*/

class Person {

public:

	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	/*bool operator==(Person &p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		}
		else {
			return false;
		}
	}*/

	string m_Name;
	int m_Age;
};

template<class T>
bool myCompare(T& a, T& b) {
	return a == b;
}

// ģ�岢����������ͨ�ã�����������������ͣ����Ծ��廯ʵ�֣����������
// �﷨��template <> ����ֵ���� ������ �������б� {}
template<> bool myCompare(Person& p1, Person& p2) {
	cout << "���廯������..." << endl;
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age) {
		return true;
	}
	else {
		return false;
	}
}

template<class T>
void fun(T a, T b) {
	a + b;
}

//void fun(int a, int b) {
//	a + b;
//}

// ����ģ����ƺ;�����
int main() {

	/*int a = 10;
	int b = 20;
	fun(a, b);

	Person p1;
	Person p2;
	fun(p1, p2);*/

	int a = 20;
	int b = 20;
	bool ret = myCompare(a, b);
	cout << ret << endl;


	Person p1("Tom", 10);
	Person p2("Tom", 20);
	ret = myCompare(p1, p2);
	cout << ret << endl;

	return 0;
}