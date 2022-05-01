#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void printList(const list<int>& li) {
	for (list<int>::const_iterator it = li.begin(); it != li.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

/*
reverse();//��ת��������lst����1,3,5Ԫ�أ����д˷�����lst�Ͱ���5,3,1Ԫ�ء�
sort(); //list����
*/
void test01() {
	list<int> li;
	for (int i = 0; i < 10; i++) {
		li.push_back(i);
	}

	printList(li);

	// ��ת
	li.reverse();
	printList(li);
}

bool myCompare(int v1, int v2) {
	return v1 > v2;
}

// ����
void test02() {
	list<int> li;
	li.push_back(10);
	li.push_back(50);
	li.push_back(30);
	li.push_back(18);
	li.push_back(22);

	///list<int>::iterator itBegin = li.begin();
	//itBegin = itBegin + 2;

	// ��׼�㷨������ ֻ֧��������ʵ�����������
	// ��֧��������ʵ��������������ڲ����Ӧ�ṩһЩ�㷨
	// sort(li.begin(), li.end());

	// li.sort();	// Ĭ�ϰ�����������

	li.sort(myCompare);

	printList(li);
}

class Person {
public:

	Person(string name, int age, int height) {
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

	bool operator==(const Person& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age && this->m_Height == p.m_Height) {
			return true;
		}
		else {
			return false;
		}
	}

	string m_Name;
	int m_Age;
	int m_Height;
};

bool myComparePerson(Person& p1, Person& p2) {
	// ������������
	// return p1.m_Age < p2.m_Age;
	if (p1.m_Age == p2.m_Age) {
		return p1.m_Height < p2.m_Height;
	}
	return p1.m_Age < p2.m_Age;
}

void test03() {

	Person p1("����", 18, 170);
	Person p2("����", 20, 150);
	Person p3("����", 19, 170);
	Person p4("����", 17, 180);
	Person p5("Tom", 18, 180);
	Person p6("Jerry", 18, 130);

	list<Person> li;
	li.push_back(p1);
	li.push_back(p2);
	li.push_back(p3);
	li.push_back(p4);
	li.push_back(p5);
	li.push_back(p6);

	// li.sort();
	li.sort(myComparePerson);

	for (list<Person>::iterator it = li.begin(); it != li.end(); it++) {
		cout << "������" << (*it).m_Name << " ���䣺" << (*it).m_Age << " ��ߣ�" << (*it).m_Height << endl;
	}
}


// list�����ķ�ת������
int main() {

	test03();

	return 0;
}