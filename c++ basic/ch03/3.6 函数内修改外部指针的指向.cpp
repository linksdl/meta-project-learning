#include <iostream>
using namespace std;

// �������ڲ��޸��ⲿָ�������ָ�򡣣��������ڲ��޸��ⲿ������ֵ��
// �����Ҫ�ں����ڲ��޸��ⲿָ�������ֵ����Ҫ�����ⲿָ������ĵ�ֵַ��
void myNewInt(int* ptr) {
	ptr = new int;
}

void myNewInt1(int ** ptr) {
	
	// ptr == &p  ->  *ptr == *&p  == p
	*ptr = new int;

}

int main() {

	// ����һ��ָ�����
	int* p = nullptr;
	// ���󣺶���һ���������� p �Ϸ���ָ��
	// myNewInt(p);

	myNewInt1(&p); // ָ������ĵ�ַ

	*p = 1000;
	cout << *p << endl;

	return 0;
}