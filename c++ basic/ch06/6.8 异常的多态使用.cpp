#include <iostream>
using namespace std;

// �쳣�Ļ���
class BaseException {
public:
	virtual void printError() {

	}
};

// ��ָ���쳣
class NullPointerException : public BaseException {
public:
	virtual void printError() {
		cout << "��ָ���쳣��" << endl;
	}
};

// Խ���쳣
class OutOfRangeException : public BaseException {
public:
	virtual void printError() {
		cout << "Խ���쳣��" << endl;
	}
};


void doWork() {

	// ....
	// throw NullPointerException();
	throw OutOfRangeException();
}


// �쳣�Ķ�̬ʹ��
int main() {

	try {
		doWork();
	}
	/*catch (NullPointerException& e) {
		e.printError();
	}
	catch (OutOfRangeException& e) {
		e.printError();
	}*/
	catch (BaseException& e) {
		cout << "BaseException" << endl;
		e.printError();
	}


	return 0;
}