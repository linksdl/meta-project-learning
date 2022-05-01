#include <iostream>
using namespace std;

class MyInt {
	friend ostream& operator<<(ostream& out, MyInt m);

public:
	MyInt() {
		num = 0;
	}

	// ǰ��++
	MyInt& operator++() {
		// ��++
		num++;

		// ��������
		return *this;
	}

	// ����++
	MyInt operator++(int) {	
		// �ȼ�¼ԭ����ֵ
		MyInt temp = *this;
		num++;
		return temp;
	}

private:
	int num;
};

ostream& operator<<(ostream& out, MyInt m) {
	out << m.num;
	return out;
}


// �������������		++
int main() {

	MyInt m;
	//cout << ++(++m) << endl; // 1	
	//cout << m << endl;	// 1	

	cout << m++ << endl;	// 0
	cout << m << endl;		// 1

	//int a = 0;
	//cout << a++ << endl;	// 0
	//cout << a << endl;		// 1
	//cout << ++a << endl;	// 2
	//cout << a << endl;		// 2

	return 0;
}