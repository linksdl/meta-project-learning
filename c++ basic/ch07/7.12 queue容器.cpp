#include <iostream>
#include <queue>
using namespace std;

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

int main() {

	queue<int> q;
	q.push(1);
	q.push(11);
	q.push(20);
	q.push(15);

	cout << "���еĴ�С��" << q.size() << endl;

	while (!q.empty()) {
		// ��ȡ��ͷ������
		cout << q.front() << endl;
		
		// ��ȡ��β������
		cout << q.back() << endl;

		// ������
		 q.pop();
	}

	cout << "���еĴ�С��" << q.size() << endl;

	queue<Person> q1;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	q1.push(p1);
	q1.push(p2);
	q1.push(p3);
	q1.push(p4);

	while (!q1.empty()) {
		Person pFront = q1.front();
		cout << "������" << pFront.m_Name << " , ���䣺" << pFront.m_Age << endl;
		q1.pop();
	}

	return 0;
}