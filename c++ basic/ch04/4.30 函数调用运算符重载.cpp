#include <iostream>
#include <string>
using namespace std;

class MyPrint {
public:

	// ����()�����
	void operator()(string text) {
		cout << text << endl;
	}

};

class MyAdd {
public:
	// �º����ǳ���û�й̶���д��
	int operator()(int a, int b) {
		return a + b;
	}
};

int getSum(int a, int b) {
	return a + b;
}

// �����������������		()  ������(ʵ���б�);
int main() {
	
	// ����MyPrint����
	MyPrint mp;
	mp("hello world !");	// mp.operator()("hello world !");
	// �º������������Ƕ��󣬶����Ǻ����������Ķ�������Ҳ��֮Ϊ��������

	MyAdd add;
	int sum = add(1, 2);
	cout << sum << endl;

	int sum1 = getSum(1, 2);


	return 0;
}