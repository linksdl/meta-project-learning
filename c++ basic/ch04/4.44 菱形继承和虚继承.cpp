#include <iostream>
using namespace std;

// ���μ̳к���̳�
/*
	���������������̳���ͬһ�����࣬Ȼ������һ����ͬʱ�̳������������࣬���ּ̳����ǳ�֮Ϊ
	���μ̳У�������ʯ�ͼ̳С�

			A
		B		C
			D

				Person
	Singer					 Waiter
			 SingingWaiter

	���μ̳д��������⣺
		1.���ּ̳����˵ĳ�Ա������Աͬ���̳�������ĳ�Ա
		������ķ���Ա���÷��ʳ�Ա��ʱ�򣬻���������ԡ�������������

		2.����ķ���Ա�̳����˵����������ݣ��˷����ڴ档

	���μ̳д���������Ľ����������̳�

*/

// ����
class Person {
public:
	int m_Age;	// ����
};

// ������  ����virtual�������̳У�Person�౻��Ϊ����ࡣ
class Singer :virtual public Person {

};

// ����Ա��
class Waiter :public virtual Person {

};

// ����ķ���Ա
class SingingWaiter : public Singer, public Waiter {

};


int main() {

	// ����һ��SingingWaiter�Ķ���
	SingingWaiter sw;

	// ����1�� ����ͬ���ĳ�Ա����������
	sw.m_Age = 200;
	/*sw.Singer::m_Age = 20;
	sw.Waiter::m_Age = 30;*/

	// ����2���̳����������ݣ��˷����ڴ�
	cout << sw.Singer::m_Age << endl;
	cout << sw.Waiter::m_Age << endl;


	return 0;
}