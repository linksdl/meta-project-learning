#pragma once
#include <string>

using namespace std;

// ����һ����ʹ��class�ؼ��֣������������{};
class Student {

public:
	// ��Ա�����ͳ�Ա����д�ڴ�������
	// ��Ա����
	string m_Name;	// ����
	int m_Age;		// ����
	int m_Id;		// ѧ��

	// ��Ա����
	void sleep();	// ˯���ķ���
	void eat();		// �Է��ķ���
	void study();	// ѧϰ�ķ���

};