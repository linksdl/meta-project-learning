#include <iostream>

using namespace std;

// ����ԭ��
int getSum(int, int);

// �ϵ���ԣ�1.�鿴�����ִ������ 2.�鿴���ݵı仯�����
int main() {

	int x = 10;
	int y = 20;

	int sum = getSum(x, y);

	cout << sum << endl;

	return 0;
}

int getSum(int a, int b) {

	int sum = a + b;
	return sum;

}
