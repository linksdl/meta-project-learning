#pragma once
class MyArray {

public:
	MyArray();	// �޲εĹ���
	MyArray(int capacity);	// �вι���
	MyArray(const MyArray& arr);	// ��������
	~MyArray();		// ��������

	void pushBack(int data);	// �������
	int getData(int position);	// ��ȡָ��λ�ô�������
	void setData(int position, int data);	// �޸�ָ��λ�ô�������

	int getCapacity() {
		return m_Capacity;
	}

	int getSize() {
		return m_Size;
	}


private:
	int m_Capacity;		// ����
	int m_Size;		// ��С
	int* pAddress;	// �ײ�ά���Ķ���������

};

