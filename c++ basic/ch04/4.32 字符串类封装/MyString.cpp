#include "MyString.h"

ostream& operator<<(ostream& out, MyString& str) {
	out << str.pString;
	return out;
}

istream& operator>>(istream& in, MyString& str) {
	// ���ж�ԭ���Ƿ������ݣ���������ͷ�
	if (str.pString != nullptr) {
		delete[] str.pString;
		str.pString = nullptr;
	}

	char buf[1024] = {0};
	cin >> buf;

	str.pString = new char[strlen(buf) + 1];
	strcpy(str.pString, buf);
	str.m_Length = strlen(buf);
	return in;
}

MyString operator+(const char* s1, const MyString& s2) {
	int newLength = strlen(s1) + s2.m_Length + 1;

	// ����һ���µ��ַ�����
	char* temp = new char[newLength] {};
	strcat(temp, s1);
	strcat(temp, s2.pString);

	MyString newStr = temp;
	delete[] temp;

	return newStr;
}

MyString::MyString(const char* str) {
	cout << "���캯��..." << endl;
	m_Length = strlen(str);
	pString = new char[m_Length + 1];
	strcpy(pString, str);
}

MyString::MyString(const MyString& str) {
	cout << "��������..." << endl;
	m_Length = str.m_Length;
	pString = new char[m_Length + 1];
	strcpy(pString, str.pString);
}

MyString::~MyString() {
	cout << "��������..." << endl;
	if (pString != nullptr) {
		delete[] pString;
		pString = nullptr;
	}
}

MyString MyString::operator+(const MyString& str) {

	int newLength = m_Length + str.m_Length + 1;

	// ����һ���µ��ַ�����
	char* temp = new char[newLength] {};
	strcat(temp, pString);
	strcat(temp, str.pString);

	MyString newStr = temp;
	delete[] temp;

	return newStr;
}

MyString MyString::operator+(const char* str) {
	int newLength = m_Length + strlen(str) + 1;

	// ����һ���µ��ַ�����
	char* temp = new char[newLength] {};
	strcat(temp, pString);
	strcat(temp, str);

	MyString newStr = temp;
	delete[] temp;

	return newStr;
}

MyString& MyString::operator=(const char* str) {
	// �ж�ԭ����û�����ݣ���������ͷ�
	if (pString != nullptr) {
		delete[] pString;
		pString = nullptr;
	}

	m_Length = strlen(str);
	pString = new char[m_Length + 1];
	strcpy(pString, str);
	return *this;
}

MyString& MyString::operator=(const MyString& str) {
	// �ж�ԭ����û�����ݣ���������ͷ�
	if (pString != nullptr) {
		delete[] pString;
		pString = nullptr;
	}

	m_Length = str.m_Length;
	pString = new char[m_Length + 1];
	strcpy(pString, str.pString);
	return *this;
}

char& MyString::operator[](int position) {
	return pString[position];
}

bool MyString::operator==(const MyString& str) {
	return strcmp(pString, str.pString) == 0;
}

bool MyString::operator==(const char* str) {
	return strcmp(pString, str) == 0;
}

MyString& MyString::operator+=(MyString& str) {
	MyString temp = *this + str;
	*this = temp;
	return *this;
}

MyString& MyString::operator+=(const char* str) {
	MyString temp = *this + str;
	*this = temp;
	return *this;
}

