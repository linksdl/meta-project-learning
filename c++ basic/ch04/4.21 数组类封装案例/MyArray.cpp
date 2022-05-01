#include "MyArray.h"
#include <iostream>

using namespace std;

MyArray::MyArray() {
	cout << "�޲ι���..." << endl;
	m_Capacity = 100;
	m_Size = 0;
	pAddress = new int[m_Capacity];
}

MyArray::MyArray(int capacity) {
	cout << "�вι���..." << endl;
	m_Capacity = capacity;
	m_Size = 0;
	pAddress = new int[m_Capacity];
}


MyArray::MyArray(const MyArray& arr) {

	cout << "��������..." << endl;
	pAddress = new int[arr.m_Capacity];
	for (int i = 0; i < arr.m_Size; i++) {
		pAddress[i] = arr.pAddress[i];
	}
	m_Size = arr.m_Size;
	m_Capacity = arr.m_Capacity;
}

MyArray::~MyArray() {
	cout << "��������..." << endl;
	if (pAddress != nullptr) {
		delete[] pAddress;
		pAddress = nullptr;
	}

}

void MyArray::pushBack(int data) {
	pAddress[m_Size] = data;
	m_Size++;
}

int MyArray::getData(int position) {
	return pAddress[position];
}

void MyArray::setData(int position, int data) {
	pAddress[position] = data;
}
