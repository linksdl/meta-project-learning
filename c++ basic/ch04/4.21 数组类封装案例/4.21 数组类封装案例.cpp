#include <iostream>
#include "MyArray.h"
using namespace std;

/*
	�������װ����
	���󣺷�װһ���࣬����������ɣ�ʵ��һЩ���ܣ�������ݣ���ȡ���ݣ��޸����ݣ�
*/
int main() {

	MyArray arr1;
	cout << "���������Ϊ��" << arr1.getCapacity() << endl;
	cout << "����Ĵ�СΪ��" << arr1.getSize() << endl;

	// �������
	arr1.pushBack(10);
	arr1.pushBack(20);
	arr1.pushBack(30);
	arr1.pushBack(40);

	cout << "���������Ϊ��" << arr1.getCapacity() << endl;
	cout << "����Ĵ�СΪ��" << arr1.getSize() << endl;

	// ��������
	for (int i = 0; i < arr1.getSize(); i++) {
		cout << arr1.getData(i) << endl;
	}

	// ����λ������ֵ
	arr1.setData(2, 300);
	cout << "==================" << endl;
 
	// ��������
	for (int i = 0; i < arr1.getSize(); i++) {
		cout << arr1.getData(i) << endl;
	}
	cout << "==================" << endl;

	MyArray arr2(arr1);
	// ��������
	for (int i = 0; i < arr2.getSize(); i++) {
		cout << arr2.getData(i) << endl;
	}


	return 0;
}