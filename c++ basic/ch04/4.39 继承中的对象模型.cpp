#include <iostream>
using namespace std;

// ����
class Base {

public:
	int m_A;

	void func() {
		cout << "func..." << endl;
	}

protected:
	int m_B;

private:
	int m_C;	// m_C������̳��ˣ��������ڱ����������˱���������������޷����ʡ�

};

// ������, ����̳е�ʱ��û��д�̳з�ʽ����ôĬ��ʹ��˽�м̳�
class Son : public Base {

public:
	int m_D;

};


// �̳��еĶ���ģ��
/*
	���еĳ�Ա�����ͳ�Ա�����Ƿֿ��洢�ġ��ڶ����У�ֻ�����˳�Ա��������Ϣ��
	���ཫ���������еĳ�Ա���̳��˹���������˽�еġ�

	ͨ��Visual Studio�Ĺ��߿��Բ鿴һ�����ڴ�ֲ���
	1.���������
	2.�л�����ǰԭ�ļ���Ŀ¼
	3. cl /d1 reportSingleClassLayout���� �ļ���
*/
int main() {

	cout << "sizeof(Base) : " << sizeof(Base) << endl;	// 12
	cout << "sizeof(Son) : " << sizeof(Son) << endl;	// 16

	return 0;
}