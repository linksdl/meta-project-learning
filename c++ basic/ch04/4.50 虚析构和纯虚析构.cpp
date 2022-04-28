#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class Animal {
public:

	Animal() {
		cout << "Animal ���캯��������" << endl;
	}

	virtual void speak() = 0;

	// �������������Խ�� �������������������������
	/*virtual ~Animal() {
		cout << "Animal ����������������" << endl;
	}*/

	// ������������Ҫ��������Ҳ��Ҫ��ʵ��
	// ����������Ҫ���������ʵ��
	// ����������˴�����������ô�������ǳ�����
	virtual ~Animal() = 0;
};

Animal::~Animal() {
	cout << "Animal ����������������" << endl;
}



class Cat : public Animal {
public:

	Cat(const char* name) {
		cout << "Cat �Ĺ��캯��������" << endl;
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
	}

	void speak() {
		cout << this->m_Name << "Сè��˵��" << endl;
	}

	~Cat() {
		if (this->m_Name != nullptr) {
			cout << "Cat ����������������" << endl;
			delete[] this->m_Name;
			this->m_Name = nullptr;
		}
	}

	char* m_Name;	// ����
};

// �������ʹ�������
int main() {

	Animal* cat = new Cat("Tom");
	cat->speak();

	delete cat;

	return 0;
}