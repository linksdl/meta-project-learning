#include <iostream>
using namespace std;

// protected���ʿ���
/*
	���ʿ���һ����3����
		1.public:	 �����ķ��ʿ��ƣ������εĳ�Ա��������ⶼ�ܹ�������
		2.private:	 ˽�еķ��ʿ��ƣ������εĳ�Աֻ���ڱ����з��ʣ������ⲻ�ܹ�������
		3.protected: �ܱ����ķ��ʿ��ƣ����û�м̳й�ϵ����private���ص�һ����

	�ڼ̳й�ϵ�У�������protected���εĳ�Ա�������п���ֱ�ӷ��ʣ�����������������ط����ܷ��ʡ�
	
	��Ա����һ��ʹ��˽�з��ʿ��ƣ���Ҫʹ���ܱ����ķ��ʿ��ơ�
	��Ա���������Ҫ��������ʣ����ǲ����������ʣ�����ʹ���ܱ����ķ��ʿ��ơ�
	
*/

class Fu {
public:
	int num1;
protected:
	int num2;
private:
	int num3;

	void func() {
		num1 = 10;
		num2 = 20;
		num3 = 30;
	}
};

class Zi : public Fu {

public:
	void fun() {
		num1 = 10;
		num2 = 20;
		// num3 = 30;
	}

};

int main() {

	// ����һ��Fu����
	Fu f;
	f.num1 = 10;
	/*f.num2 = 20;
	f.num3 = 30;*/

	Zi zi;
	zi.num1 = 10;



	return 0;
}