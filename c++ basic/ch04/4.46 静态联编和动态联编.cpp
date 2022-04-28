#include <iostream>
using namespace std;

// ������
class Animal {

public:

	// �麯�� �����õľ��Ƕ�̬���ࣩ
	virtual void speak() {
		cout << "������˵��" << endl;
	}

};

// è��
class Cat :public Animal {

public:
	void speak() {
		cout << "è��˵��" << endl;
	}

};


// ����
class Dog :public Animal {

public:
	void speak() {
		cout << "����˵��" << endl;
	}

};

// C++�и����ָ��������� ����ָ������Ķ��󣬲��ᱨ��
void doSpeak(Animal& animal) {	// Animal & animal = c;
	
	/*
		������Animal�е�speak()���������ڵ�ַ��󶨣���̬���ࡣ
		��Ϊ�ڱ����ڼ��֪����speak�����ĵ�ַ���Ƕ����speak();

		���ǣ�������Ҫ�Ľ���ǣ��������������è���󣬾�ִ��è��speak();
		������������ǹ����󣬾�ִ�й���speak();
		������ǵ�ַ��󶨣���̬���ࡣ
	*/
	animal.speak();
}

// ��̬����Ͷ�̬����
int main() {

	Cat c;
	doSpeak(c);

	Dog d;
	doSpeak(d);

	// Animal& animal = c;

	return 0;
}