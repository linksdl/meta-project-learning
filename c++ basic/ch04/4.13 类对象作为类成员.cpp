#include <iostream>
#include <string>
using namespace std;

// �ֻ���
class Phone {
public:
	string m_Pname;

	Phone() {
		cout << "Phone���޲ι���" << endl;
	}

	Phone(string pname) {
		cout << "Phone���вι���" << endl;
		m_Pname = pname;
	}

	~Phone() {
		cout << "Phone����������" << endl;
	}

};

// ��Ϸ��
class Game {
public:
	string m_Gname;

	Game() {
		cout << "Game���޲ι���" << endl;
	}

	Game(string gname) {
		cout << "Game���вι���" << endl;
		m_Gname = gname;
	}

	~Game() {
		cout << "Game����������" << endl;
	}
};

class Person {
public:

	string m_Name;	// ����
	Game m_Game;	// ��Ϸ
	Phone m_Phone;	// �ֻ�

	Person() {
		cout << "Person���޲ι���" << endl;
	}

	Person(string name, string pname, string gname) : m_Name(name), m_Phone(pname), m_Game(gname) {
		cout << "Person���вι���" << endl;
	}

	~Person() {
		cout << "Person����������" << endl;
	}

};

// �������Ϊ���Ա
/*
	�������������Ϊ�����еĳ�Ա��
		�����˳���ǣ��ȵ���������Ĺ��죬�ٵ��ñ���Ĺ��졣
		������˳���ǣ��͹����˳�����෴�ġ�
	
	��Ա�Ĺ����Ⱥ�˳���Ǹ��������е�˳������ģ������췽���еĳ�ʼ��˳���޹ء�

*/
int main() {

	Person p1("zs", "iphone", "wzry");

	return 0;
}