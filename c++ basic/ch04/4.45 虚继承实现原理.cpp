#include <iostream>
using namespace std;

// ����
class Person {
public:
	int m_Age;	// ����
};

// ������
class Singer :virtual public Person {

};

// ����Ա��
class Waiter :virtual public Person {

};

// �ᳪ��ķ���Ա��
class SingingWaiter :public Singer, public Waiter {

};

// ��̳е�ʵ��ԭ��
/*
	vbptr: virtual base pointer(�����ָ��)
	ԭ��ֻ��һ��Ψһ�ĳ�Ա��ͨ�����������ָ�룬���ָ��ָ�����һ�ű�������
	������б����˵�ǰ��ȡ��Ψһ�����ݵ�ƫ������
	
*/
int main() {

	SingingWaiter sw;
	sw.m_Age = 20;

	// ͨ��Singer�ҵ�ƫ����
	cout << "Singer��ƫ���� �� " << *((int*)*(int*)&sw + 1) << endl;

	// ͨ��Waiter�ҵ�ƫ����
	cout << "Waiter��ƫ���� �� " << *((int*)*((int*)&sw + 1) + 1) << endl;

	// ��ȡage��ֵ
	cout << *(int*)((char*)&sw + *((int*)*(int*)&sw + 1)) << endl;

	return 0;
}