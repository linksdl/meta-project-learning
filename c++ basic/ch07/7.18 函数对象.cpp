#include <iostream>
using namespace std;

// 1.�º���������()��������࣬ʹ�ö�����ʹ�ý׶���������
class MyPrint {
public:
	void operator()(string test) {
		cout << test << endl;
		m_Count++;
	}
	int m_Count = 0;
};

void test01() {
	MyPrint mp;
	mp("hello world");	//  ���������ĺ���������һ������
}

// 2.�º�����������ͨ�����ĸ������ӵ���Լ���һЩ�ڲ�״̬
void test02() {
	MyPrint mp;
	mp("hello");
	mp("hello");
	mp("hello");
	mp("hello");
	mp("hello");

	cout << "mp ʹ�õĴ���Ϊ��" << mp.m_Count << endl;
}

void myPrint(string test) {
	cout << test << endl;
}

// 3.�������������Ϊ�����Ĳ���
void doWork(MyPrint mp, string str) {
	mp(str);
}

void test03() {
	MyPrint mp;
	doWork(mp, "hello");
}

// ��������
int main() {

	test03();

	return 0;
}