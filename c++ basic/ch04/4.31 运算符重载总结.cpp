#include <iostream>
using namespace std;


/*
	1.һԪ�������һ��������������Ԫ�������������������
	  ++ -- a++ ++a			t1 + t2
	
	2.��Ա���������
		һԪ��û�в�����
		��Ԫ����һ������
		operator+(Time & t);
		t1 + t2;	t1.operator+(t2);

	3.ȫ�����������
		һԪ����һ������
		��Ԫ������������
		operator+(Time & t1, Time & t2);
		t1 + t2		// operator+(t1, t2)

	4.��������ر�������Ч��C++������������鹹һ���µķ��š� ���� @

	5.����Υ�������ԭ���ľ䷨�ͺ��塣  a + b  t1 + t2

	6.��������������������
		sizeof
		. ��Ա�����   p.age;
		��Աָ�������
		:: ��������������
		?: ���������

	7.ֻ��ͨ����Ա�������ص������:
		= ���� []  ->
		<< �� >> ֻ��ͨ��ȫ�ֺ��������Ԫ�����������ء�
		cout << p 
		��Ҫ����&& �� || ���������Ϊ�޷�ʵ�ֶ�·�Ĺ���
*/

class Complex {
public:
	Complex(int flag) {
		this->flag = flag;
	}
	Complex& operator+=(Complex& complex) {
		this->flag = this->flag + complex.flag;
		return *this;
	}
	bool operator&&(Complex& complex) {
		return this->flag && complex.flag;
	}
public:
	int flag;
};

int main() {
	Complex complex1(0);  //flag 0 
	Complex complex2(1);  //flag 1

	// ԭ��������������������㣬���Ϊ�٣����˳����㣬���Ϊ�١�


	// �������������ģ�
	// complex1.operator&&(complex1 += complex2)
	// complex1.operator&&(complex1.operator+=(complex2));
	if (complex1 && (complex1 += complex2)) {
		cout << "��!" << endl;
	}
	else {
		cout << "��!" << endl;
	}
	return 0;
}