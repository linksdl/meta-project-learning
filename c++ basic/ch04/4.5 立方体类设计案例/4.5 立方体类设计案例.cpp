#include <iostream>
#include "Cube.h"
using namespace std;

/*
	�����������(Cube)����������������������
	�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�

	�������ࣺ
		��Ա��������(length) ��(widht) ��(height)
		��Ա��������ȡ����ķ���(getArea) ��ȡ����ķ���(getVolume) ˽�г�Ա�Ĺ����������� �ж������������Ƿ���ȵķ���
*/

bool cubCompare(Cube& c1, Cube& c2) {
	if (c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth() && c1.getHeight() == c2.getHeight()) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	// �������������
	Cube c1;

	c1.setLength(10);
	c1.setWidth(10);
	c1.setHeight(5);

	cout << "����� " << c1.getArea() << endl;
	cout << "����� " << c1.getVolume() << endl;

	Cube c2;
	c2.setLength(10);
	c2.setWidth(10);
	c2.setHeight(5);

	bool flag = c1.cubCompare(c2);
	cout << flag << endl;

	flag = cubCompare(c1, c2);
	cout << flag << endl;

	return 0;
}