#include <iostream>
#include <string>
using namespace std;

/*
	��Ԫ�����ã����������һ�����˽�г�Ա��
	��Ԫ�����֣�
		1.��Ԫ��ȫ�֣����� friend
		2.��Ԫ��
		3.��Ԫ��Ա����
*/

class Building;

// ��������
class GoodFriend {
public:
	void visit(Building& building);
};

class Building {

	// ���߱�����GoodFriend�����ҵĺ����ѣ����Է����ҵ��е�˽�г�Ա��
	friend class GoodFriend;	// ��Ԫ��

public:
	string m_SittingRoom;	// ����

	Building();

private:
	string m_BedRoom;	// ����
};

Building::Building() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

void GoodFriend::visit(Building& building) {
	cout << "���ڷ��ʣ�" << building.m_SittingRoom << endl;
	cout << "���ڷ��ʣ�" << building.m_BedRoom << endl;
}


int main() {

	Building building;

	GoodFriend gf;
	gf.visit(building);



	return 0;
}