#include <iostream>
using namespace std;


// ����1: �����û���������ݣ��ж��û�����������ֻ����ַ���  
void test1() {
	// 12345	abcde
	cout << "������һ���ַ�����������:" << endl;

	char ch = cin.peek();

	if (ch >= '0' && ch <= '9') {
		int num;
		cin >> num;
		cout << "������������֣�" << num << endl;
	}
	else {
		char buf[1024];
		cin >> buf;
		cout << "����������ַ�����" << buf << endl;
	}

}

// ����2 �����û����� 1 ~ 10 ֮������֣��������������������
void test2() {
	
	int num;

	while (true) {
		cout << "������ 1 ~ 10 ֮������֣�" << endl;
		cin >> num;
		// cout << cin.fail() << endl;
		if (num >= 1 && num <= 10) {
			cout << "������ȷ�������ֵΪ��" << num << endl;
			break;
		}

		// ���ñ�־λ
		cin.clear();
		// ��ջ�����	cin.getline()  cin.ignore();
		char buf[1024] = { 0 };
		cin.getline(buf, sizeof(buf));

	}

}

// ��׼����������
int main() {

	test2();

	return 0;
}