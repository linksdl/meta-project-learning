#include "Student.h"
#include <iostream>

using namespace std;

// �Է��ķ���
void Student::eat() {
	cout << "�Է�" << endl;
}

// ˯���ķ���
void Student::sleep() {
	cout << "˯��" << endl;
}

// ѧϰ�ķ���
void Student::study() {
	cout << "ѧϰ" << endl;
}

void Student::setName(string name) {
	m_Name = name;
}

string Student::getName() {
	return m_Name;
}

void Student::setAge(int age) {
	m_Age = age;
}

int Student::getAge() {
	return m_Age;
}

void Student::setId(int id) {
	m_Id = id;
}

int Student::getId() {
	return m_Id;
}
