#include <iostream>
using namespace std;


//void test() throw(){
//}
//
//void test() throw(int) {
//}
//
//void test() throw(int,double) {
//}
//
//void test() noexcept {
//}

class myException {
public:
	void printError() {
		cout << "���Լ����쳣" << endl;
	}
};

int myDivide(int a, int b) {
	if (b == 0) {
		// ͨ��throw�׳��쳣
		// throw 10;
		// throw 3.14;
		// throw string("aaaa");
		// throw myException();
		throw 'a';
	}
	return a / b;
}

// �쳣���﷨
int main() {

	int a = 10;
	int b = 0;

	// �ѿ��ܻ�����쳣�Ĵ���ŵ�try����
	try {
		int ret = myDivide(a, b);
	}
	catch (int num) {
		// ����׽����Ӧ���쳣�󣬽��еĴ������
		cout << "int�����쳣����, num = " << num << endl;
	}
	catch (double num) {
		cout << "double�����쳣����, num = " << num << endl;
	}
	catch (string str) {
		cout << "string�����쳣����" << endl;
	}
	catch (myException e) {
		e.printError();
	}
	catch (...) {	// �������͵��쳣��...���Բ���
		cout << "�����쳣����" << endl;
	}
	
	return 0;
}

/*
	�ܽ᣺
	1.������쳣����ͨ��throw��������һ���쳣�����׳�
	2.�������׳��쳣�ĳ���ŵ�try�������
	3.�����try�����ִ���ڼ�û�������쳣��catch�����Ͳ���ִ��
	4.catch�Ӿ����ݳ��ֵ��Ⱥ�˳�򱻼�飬ƥ���catch��䲶�񲢴����쳣�����߼����׳��쳣��
	5.�������Ĵ���δ�ҵ��������ֹ����
	6.�����˵��쳣��������catch�����һ����֧��ʹ�� throw�����׳�
	7.C++�쳣����ʹ���쳣���������쳣�Ĵ�������һ�������У������ײ�ĺ����������ؽ���������⣬��
	���ع���Ŀ����쳣�Ĵ����ϲ�ĵ����߿������ʵ���λ�����öԲ�ͬ�����쳣�Ĵ���
*/