#include <iostream>
#include <string>
using namespace std;

// ģ���У�����ʹ��Ĭ�ϲ���
template<class NAMETYPE, class AGETYPE = int>
class Person {
public:

	Person(NAMETYPE name, AGETYPE age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson() {
		cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
	}

	NAMETYPE m_Name;
	AGETYPE m_Age;
};

// ��ģ���еĳ�Ա����������һ��ʼ������������ʹ�õ�ʱ�������,���滻T������
template<class T>
class testClass {
public:
	void func1() {
		obj.show1();
	}

	void func2() {
		obj.show2();
	}

	T obj;
};

class Person1 {
public:
	void show1() {
		cout << "show1()" << endl;
	}
};

class Person2 {
public:
	void show2() {
		cout << "show2()" << endl;
	}
};

// ��ģ��Ļ����﷨����ģ���г�Ա�����Ĵ���ʱ��
int main() {

	//Person<string, int> p1("Tom", 20);	// ʹ����ģ�岻���Զ������Ƶ���ֻ����ʾָ������
	//p1.showPerson();

	//Person<string> p2("Jerry", 30);
	//p2.showPerson();

	testClass<Person2> tc;
	tc.func1();


	return 0;
}