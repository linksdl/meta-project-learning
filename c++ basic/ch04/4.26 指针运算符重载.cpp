#include <iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		cout << "Person�Ĺ��캯��" << endl;
		m_Age = age;
	}

	// �����Ա����Ϣ
	void showAge() {
		cout << "m_Age = " << this->m_Age << endl;
	}

	~Person(){
		cout << "Person����������" << endl;
	}

	int m_Age;
};

// ����ָ����
class SmartPointer {
public:

	Person* operator->() {
		return this->m_Person;
	}

	Person& operator*() {
		return *m_Person;
	}

	SmartPointer(Person* p) {
		m_Person = p;
	}

	Person* m_Person;	// �ڲ�ά����Person��ָ��

	~SmartPointer() {
		cout << "SmartPointer��������" << endl;
		if (this->m_Person != nullptr) {
			delete this->m_Person;
			this->m_Person = nullptr;
		}
	}
};

// ָ�����������		->  *
int main() {

	// ����Person�Ķ���
	Person* p = new Person(30);
	p->showAge();
	(*p).showAge();

	// delete p;
	cout << "==============" << endl;
 
	SmartPointer sp(p);
	sp->showAge();		// sp.operator->();
	// sp->->showAge(); ���������Ż��� sp->showAge();
	(*sp).showAge();


	return 0;
}