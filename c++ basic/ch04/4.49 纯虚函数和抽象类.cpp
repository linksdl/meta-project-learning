#include <iostream>
using namespace std;

class Base {
public:

	/*
		���麯�����﷨�� virtual ����ֵ���� ������(�β��б�) = 0;
		���麯��������Ҫ��ʵ�֣����Ժ���ͨ�ĺ�������
		���˴��麯�����࣬Ҳ��Ϊ������
		�������޷�ʵ��������
		�������Ҫ��д���ി�麯������������Ҳ�ǳ�����
	*/
	virtual void func() = 0;
	
};

class Son : public Base {
public:

	virtual void func() {

	}

};

// ���麯���ͳ�����
int main() {

	// Base base;	// �������޷�ʵ��������
	// Son s;	// �������Ҫ��д���ി�麯������������Ҳ�ǳ�����
	Son s;

	return 0;
}