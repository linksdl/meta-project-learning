#include <iostream>
using namespace std;

// �������ģʽ
/*
	����������ʵ�������󣩣�����һ������ʵ����һ�����󣬴���һ�����ʵ��
	���ģʽ������Ա�ľ����ܽ�
	�������ģʽ��һ������һ��ϵͳ�У������У�ֻ����һ������
	
	�����ĺô�����ֹ��������Ķ��󣬽�ʡ�ڴ档
*/

// ��ϯ��
class ChairMan {

private:
	// 1.˽�л�Ĭ�ϵĹ��캯��
	ChairMan() {
	}

    // �������캯��˽�л� ʵ�ֵ���ģʽ
	ChairMan(const ChairMan& c) {

	}

	// 2.����һ����̬��ʵ����Ҫ˽��
	static ChairMan* singleMan;

public:

	// ���ַ�ʽ��֮Ϊ����ʽ
	/*static ChairMan* getInstance() {
		return singleMan;
	}*/

	// ��Ϊ����ʽ
	static ChairMan* getInstance() {
		// return singleMan;
		if (singleMan == nullptr) {
			singleMan = new ChairMan;
		}
		return singleMan;
	}

};

// ChairMan* ChairMan::singleMan = new ChairMan;
ChairMan* ChairMan::singleMan = nullptr;

int main() {

	/*ChairMan c1;
	ChairMan c2;
	ChairMan c3;*/

	ChairMan* man = ChairMan::getInstance();
	ChairMan* man1 = ChairMan::getInstance();
	cout << (man == man1) << endl;

	/*ChairMan* man2 = new ChairMan(*man);
	cout << (man == man2) << endl;*/



	return 0;
}