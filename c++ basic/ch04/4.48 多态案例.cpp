#include <iostream>
#include <cstring>
using namespace std;

// �����ö�̬ʵ�ּ�������
class Calculator {
public:
	int m_A;
	int m_B;

	int getResult(string oper) {
		if (oper == "+") {
			return m_A + m_B;
		}
		else if (oper == "-") {
			return m_A - m_B;
		}
		else if (oper == "*") {
			return m_A * m_B;
		}
	}
};

/*
	��ҵ�����У��ᳫ ����ԭ�򡣶���չ���п��ţ����޸Ľ��йر�
	��̬�ĺô���������֯�ṹ��������ߴ���Ŀɶ��ԣ���߿���չ�ԡ�
*/

// ʹ�ö�̬ʵ�ּ�������
class AbstractCalculator {
public:
	int m_A;
	int m_B;

	/*virtual int getResult() {
		return 0;
	}*/

	// ���麯��
	/*
		���������˴��麯������������ڳ����ࡣ
		���������޷�ʵ��������
		������̳��˳����࣬��ô����������Ҫ��д�����еĴ��麯������������Ҳ�ǳ�����
	*/
	virtual int getResult() = 0;
};

// �ӷ���������
class AddCalculator : public AbstractCalculator {
public:
	virtual int getResult() {
		return m_A + m_B;
	}
};

// ������������
class SubCalculator : public AbstractCalculator {
public:
	virtual int getResult() {
		return m_A - m_B;
	}
};

// �˷���������
class MulCalculator : public AbstractCalculator {
public:
	virtual int getResult() {
		return m_A * m_B;
	}
};

// ��̬�İ������������ࣩ
int main() {

	// ʹ�üӷ�������
	AbstractCalculator* cal = new AddCalculator;
	cal->m_A = 10;
	cal->m_B = 20;
	cout << cal->getResult() << endl;
	delete cal;

	cal = new SubCalculator;
	cal->m_A = 20;
	cal->m_B = 10;
	cout << cal->getResult() << endl;
	delete cal;


	return 0;
}