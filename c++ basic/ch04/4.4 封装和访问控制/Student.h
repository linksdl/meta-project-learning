#pragma once
#include <string>

using namespace std;

class Student {


private:
	string m_Name;	// ����
	int m_Age;		// ����
	int m_Id;		// ѧ��

public:
	// �Է��ķ���
	void eat();

	// ˯���ķ���
	void sleep();

	// ѧϰ�ķ���
	void study();

	void setName(string name);

	string getName();

	void setAge(int age);

	int getAge();

	void setId(int id);

	int getId();

};