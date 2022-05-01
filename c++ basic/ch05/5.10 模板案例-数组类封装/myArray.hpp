#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray {

public:
	MyArray(int capacity) {
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	// ��������
	MyArray(const MyArray& arr) {
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	MyArray& operator=(const MyArray& arr) {
		// ���ж�ԭ�еĶ����Ƿ������ݣ���������ͷ�
		if (this->pAddress != nullptr) {
			delete[] this->pAddress;
			this->pAddress = nullptr;
		}
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	T& operator[](int pos) {
		return this->pAddress[pos];
	}

	// β��
	void push_Back(const T& val) {
		if (this->m_Capacity == this->m_Size) {
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	// ��ȡ����
	int getCapacity() {
		return this->m_Capacity;
	}

	// ��ȡ��С
	int getSize() {
		return this->m_Size;
	}

	~MyArray() {
		if (this->pAddress != nullptr) {
			delete[] this->pAddress;
			this->pAddress = nullptr;
		}
	}


private:

	T* pAddress;	// ָ�����������ָ��
	int m_Capacity;	// ��������
	int m_Size;		// �����С

};