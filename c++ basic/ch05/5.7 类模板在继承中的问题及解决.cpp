#include <iostream>
using namespace std;

template <class T>
class Base {
public:
	T m_A;
};

// ���࣬������һ����ģ����Ϊ����ʱ��������ȷ����ķ��͵Ĳ���
class Son : public Base<int> {
};

template<class T>
class Base2 {		// Base2<double>
public:
	T m_A;
};

template<class T1, class T2>
class Son2 : public Base2<T2> {		// Son2<int,double>
public:

	Son2() { 
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
	}

	T1 m_B;
};


// ��ģ���ڼ̳��е����⼰�������
int main() {

	Son2<int, double> s;
	cout << "Base2������Ϊ��" << typeid(Base2<double>).name() << endl;
	cout << "Son2������Ϊ��" << typeid(Son2<int,double>).name() << endl;

	return 0;
}