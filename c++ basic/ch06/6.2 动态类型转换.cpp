#include <iostream>
using namespace std;

class Animal {
	virtual void eat() {}
};

class Dog : public Animal {
	virtual void eat() {
		cout << "�Թ���" << endl;
	}
};

class Other {};

// �����������͵�ת��
void test01() {

	int a = 10;
	// ��̬ת����֧�ֻ����������͵�ת����������ָ�������������͵�ָ���������
	// dynamic_cast<double>(a);

}

// �̳й�ϵָ��ת��
void test02() {

	Animal* animal = new Animal;
	Dog* dog = new Dog;

	// �����ָ��ת���ɸ����ָ��   ���ԣ���ȫ
	Animal * animal1 = dynamic_cast<Animal*>(dog);

	// �����ָ��ת���������ָ��   ������
	// dynamic_cast<Dog*>(animal);

	// ���������̬������Խ�������ת��
	Animal* animal2 = new Dog;
	dynamic_cast<Dog*>(animal2);
}

// �̳й�ϵ���õ�ת��
void test03() {
	Dog dog;
	Dog& ref_dog = dog;	// dog������

	Animal animal;
	Animal& ref_animal = animal;

	// ���������ת���ɸ��������  ����
	dynamic_cast<Animal&> (ref_dog);

	// ���������ת�������������
	dynamic_cast<Dog&> (ref_animal);

}

// û�м̳й�ϵ ָ��ת��
void test04() {
	Animal* animal = nullptr;
	Other* other = nullptr;
	// dynamic_cast<Animal*>(other);
}


// ��̬ת�� dynamic_cast  �������μ������ת��������ת��
int main() {



	return 0;
}