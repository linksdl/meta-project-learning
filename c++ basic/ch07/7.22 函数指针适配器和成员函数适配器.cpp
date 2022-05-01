#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void printVal(int val, int start) {
	cout << val + start << endl;
}

// ����ָ��������
void test01() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	cout << "��������ʼ�ۼ�ֵ��" << endl;
	int start;
	cin >> start;

	// �� printVal����ָ��  ����� ��������
	for_each(v.begin(), v.end(), bind2nd(ptr_fun(printVal), start));

}

// ��Ա����������
class Person {
public:

	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson() {
		cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
	}

	string m_Name;
	int m_Age;
};

void test02() {
	vector<Person> v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	for_each(v.begin(), v.end(), mem_fun_ref(&Person::showPerson));

}


// ����ָ�������� ��Ա����������
int main() {

	test02();

	return 0;
}