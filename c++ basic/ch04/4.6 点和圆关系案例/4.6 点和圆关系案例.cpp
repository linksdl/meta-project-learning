#include <iostream>
#include "Point.h"
#include "Circle.h"

using namespace std;

/*
	���һ��Բ���ࣨCircle��, ��һ�����ࣨPoint��,������Բ�Ĺ�ϵ��

	���ࣨPoint��:
		��Ա������x�����꣨m_X�� y�����꣨m_Y��
		��Ա��������Ա�����Ĺ������ʷ���

	Բ�ࣨCircle��:
		��Ա������Բ�ģ�Point m_Center�� �뾶��m_Radius��
		��Ա��������Ա�����Ĺ������ʷ���  �жϵ��Բ��ϵ�ķ���

	���Բ�Ĺ�ϵ��
		1.����Բ��
		2.����Բ��
		3.����Բ��
*/
int main() {

	// ����һ����
	Point p;
	p.setX(6);
	p.setY(0);

	// ����һ��Բ
	Circle c;
	c.setCenter(5, 0);
	c.setRadius(5);

	c.isPointInCircle(p);

	return 0;
}