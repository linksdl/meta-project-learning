#include <iostream>
using namespace std;

class Animal {};
class Dog : public Animal {};
class Other {};


// �����������͵�ת��
void test01() {
	char a = 'a';
	double b = static_cast<double>(a);
	cout << b << endl;

	double d = 3.14;
	int i = static_cast<int>(d);
	cout << i << endl;
}

// �̳й�ϵָ�뻥ת
void test02() {
	Animal* animal = nullptr;	// new Cat();
	Dog* dog = nullptr;

	// �����ָ��ת���ɸ����ָ�루��ȫ��
	Animal* animal1 = static_cast<Animal*>(dog);
	// �����ָ��ת���������ָ�루����ȫ��
	Dog* dog1 = static_cast<Dog*>(animal);

}

// �̳й�ϵ���û�ת
void test03() {

	Animal animal;
	Dog dog;
	
	Animal& ref_ani = animal;
	Dog& ref_dog = dog;

	// ���������ת�ɸ�������ã���ȫ��
	Animal & ref_ani1 = static_cast<Animal&>(ref_dog);
	// ���������ת����������ã�����ȫ��
	Dog& ref_dog1 = static_cast<Dog&>(ref_ani);

}

// û�й�ϵ��ָ��ת��
void test04() {
	Animal* animal = nullptr;
	Other* other = nullptr;

	// static_cast<Animal*>(other);	// ����ת����Ч
}

// ��̬ת�� static_cast   �﷨��static_cast <typename> (expression)
int main() {

	// test01();
	// test02();
	test03();

	return 0;
}