#include <iostream>

using namespace std;

// ������ԭ��
int getSum(int, int);

void print();

// ������ʹ��
int main() {

	int sum = getSum(1,2);

	cout << sum << endl;

	print();
	print();
	print();

	return 0;
}

int getSum(int a, int b) {
	int sum = a + b;
	return sum;
}

void print() {
	cout << "HelloWorld" << endl;
	// return;
}