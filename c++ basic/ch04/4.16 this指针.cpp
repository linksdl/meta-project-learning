#include <iostream>
#include <string>
using namespace std;

/*
	thisָ��
	thisָ��ָ���������ó�Ա�����Ķ���,˭���÷�����thisָ���ָ��˭��
	this����Ϊ��ʽ�������ݸ�������ÿһ���Ǿ�̬�ĳ�Ա�����ж���thisָ�롣

	thisָ������ã�
		1.���βκͳ�Ա����ͬ��ʱ��������thisָ�������֡�
		2.����ķǾ�̬�ĳ�Ա�����з��ض���������ʹ��return *this;

*/

// ����
class Person {
public:

	string name;	// ����
	int age;		// ����

	// �޲εĹ��캯��
	Person() {}

	// �вεĹ��캯��
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}

	// ������ȡ��������������Ƚϴ���Ǹ�����
	Person& getOlder(Person& p) {
		if (age > p.age) {
			return *this;
		}
		else {
			return p;
		}
	}

};

int main() {

	// ����һ��Person����
	Person p1("zs", 20);
	cout << "������" << p1.name << endl;
	cout << "���䣺" << p1.age << endl;

	Person p2("ls", 21);
	cout << "������" << p2.name << endl;
	cout << "���䣺" << p2.age << endl;

	p1.getOlder(p2);

	
	return 0;
}