#include <iostream>
#include <string>
using namespace std;

/*
	��Ԫ��ע�����
		1.��Ԫ��ϵ���ܱ��̳�
		2.��Ԫ��ϵ�ǵ���ģ���A����B�����ѣ�������B��һ������A������
		3.��Ԫ��ϵ�����д����ԡ���B����A�����ѣ���C����B�����ѣ�������C
		��һ������A�����ѡ�
*/
class Building;
// ��������
class GoodFriend {

public:
	void visit(Building& building);
	void visit1(Building& building);
};

// ��Ԫ��Ա����
class Building {

	friend void GoodFriend::visit(Building& building);

	// friend class GoodFriend;
public:
	string m_SittingRoom;	// ����

	Building();

private:
	string m_BedRoom;	// ����
};

Building::Building() {
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

void GoodFriend::visit(Building& building) {
	cout << "���ڷ��ʣ�" << building.m_SittingRoom << endl;
	cout << "���ڷ��ʣ�" << building.m_BedRoom << endl;
}

void GoodFriend::visit1(Building& building) {
	cout << "���ڷ��ʣ�" << building.m_SittingRoom << endl;
	// cout << "���ڷ��ʣ�" << building.m_BedRoom << endl;
}

int main() {

	Building building;
	GoodFriend gf;
	gf.visit(building);



	return 0;
}