#include <iostream>
#include <stack>
using namespace std;

// stack������ʹ��
int main() {

	stack<int> s;	// ջ����

	// ��Ԫ����ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout << "ջ�Ƿ�Ϊ�գ�" << s.empty() << endl;
	cout << "��ȡԪ�صĸ�����" << s.size() << endl;

	while (!s.empty()) {

		// ��ȡջ����Ԫ��
		cout << s.top() << endl;

		// �Ƴ�ջ����Ԫ��
		s.pop();

		cout << "��ȡԪ�صĸ�����" << s.size() << endl;
	}

	cout << "Ԫ�صĸ����� " << s.size() << endl;


	return 0;
}