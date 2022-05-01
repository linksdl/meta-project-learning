#pragma once
#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

class MyString {

	friend ostream& operator<<(ostream& out, MyString& str);
	friend istream& operator>>(istream& in, MyString& str);
	friend MyString operator+(const char* s1, const MyString& s2);

public:
	MyString(const char* str);	// ���캯��
	MyString(const MyString& str);	// ��������
	~MyString();	// ��������
	int length() {
		return m_Length;
	}

	MyString operator+(const MyString& str);
	MyString operator+(const char* str);

	MyString& operator=(const char* str);
	MyString& operator=(const MyString& str);

	char& operator[](int position);

	bool operator==(const MyString& str);
	bool operator==(const char* str);

	MyString& operator+=(MyString& str);
	MyString& operator+=(const char* str);
	
private:
	char* pString;	// ά���ڵײ���ڶ��������ַ�����
	int m_Length;	// �ַ����ĳ���	\0
};

