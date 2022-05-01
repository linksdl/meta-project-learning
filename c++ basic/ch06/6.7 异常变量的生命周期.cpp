#include <iostream>
using namespace std;

class MyException {
public:

	void printError() {
		cout << "��ӡ����" << endl;
	}

	MyException() {
		cout << "�쳣�������캯��" << endl;
	}

	MyException(const MyException& e) {
		cout << "��������" << endl;
	}

	~MyException() {
		cout << "�쳣������������" << endl;
	}
};

void doWork() {
	// throw MyException();
	// throw &MyException();
	throw new MyException();
}

void test03() {
	try {
		doWork();
	}
	catch (MyException* e) {
		e->printError();
		cout << "�����쳣" << endl;
		delete e;
	}

}

void test02() {
	try {
		doWork();
	}
	catch (MyException& e) {
		cout << "�����쳣" << endl;
	}

}

void test01() {
	try {
		doWork();
	}
	catch (MyException e) {
		cout << "�����쳣" << endl;
	}
	
}




// �쳣��������������
int main() {

	// test01();
	// test02();
	test03();

	return 0;
}