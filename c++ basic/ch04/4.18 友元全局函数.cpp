#include <iostream>
#include <string>
using namespace std;

// ��Ԫ
/*
	��Ԫ������
		1.��Ԫ��ȫ�֣�����
		2.��Ԫ��
		3.��Ԫ��Ա����
*/

// ��
class Building {

	// ��ȫ�ֺ���visit��Ϊ����Building�ĺ����ѣ��Ϳ��Է���˽�г�Ա��
	friend void visit(Building& building);

public:
	string m_SittingRoom;	// ����

	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

private:
	string m_BedRoom;	// ����

};

void visit(Building& building) {
	cout << "���ڷ��ʣ�" << building.m_SittingRoom << endl;
	cout << "���ڷ��ʣ�" << building.m_BedRoom << endl;
}


int main() {

	// ����һ��Building����
	Building building;

	// cout << "���ڷ��ʣ�" << building.m_SittingRoom << endl;
	// cout << "���ڷ��ʣ�" << building.m_BedRoom << endl;
	visit(building);


	return 0;
}