#include <iostream>
using namespace std;

// ���캯���ķ���͵���
/*
	���캯���ķ��ࣺ
		���෽ʽ1������		�޲ι��죨Ĭ�Ϲ��죩	�вι���
		���෽ʽ2������		��ͨ����				��������

	��������ṩ�˹��캯����ϵͳ�������ṩ�޲ε�Ĭ�Ϲ��캯����
*/

class Person {
public:
	int m_Age;	// ����

	// �޲ι���
	Person() {
		m_Age = 0;
		cout << "�޲ι��캯��������..." << endl;
	}

	// �вι���
	Person(int age) {
		m_Age = age;
		cout << "�вι��캯��������..." << endl;
	}

	// �������캯�� һ���������ݿ�������һ������
	Person(const Person& p) {
		m_Age = p.m_Age;
		cout << "�������캯��������..." << endl;
	}

	~Person() {
		cout << "��������������..." << endl;
	}

};

int main() {

	// ���캯����ε���
	// ���������ַ�ʽ����ʾ����  ��ʽ����

	// ��ʾ����
	Person p = Person();
	Person p1 = Person(20);
	cout << p1.m_Age << endl;
	/*
	Person p4(p);
	Person p5 = Person(p);*/

	// ��ʽ����
	/*Person p2;
	Person p3(30);*/
	// ��ʽ�����޲ι��캯�����ܼ�������
	// Person p2(); ��������

	// ��������, ����ִ�������Ժ������ͷ�
	// Person();
	// Person(p);	// ��������Ϊ Person p;

	// ��ʽת����
	Person p6 = 10;	// ��������ת���� Person p6 = Person(10);

	// ������ʽת�������ÿ������캯��
	Person p7 = p6;	// ת�� Person p7 = Person(p6);

	// ��ʼ���б�
	/*Person p8 = {};
	Person p9{20};
	Person p10 = { 22 };*/

	return 0;
}