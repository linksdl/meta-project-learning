#include <iostream>

using namespace std;

// ��ʾ�����������ʹ��
int main() {

	// ��������, ��������õ��Ļ�������
	int num1 = 5;
	int num2 = 2;

	int result = num1 / num2;
	cout << result << endl;
	cout << num1 / num2 << endl;

	// %ģ  ȡ�����
	cout << 5 % 2 << endl;
	cout << 5 % -2 << endl;
	cout << -5 % 2 << endl;
	cout << -5 % -2 << endl;

	// ++ --
	// ++�����ǶԱ�����������1 
	int i = 1;
	int j = 1;
	// i++;
	// ++i;
	int sum = i++ + 2;
	int sum1 = ++j + 2;
	// ++�ڲ�������ǰ�棬��������Ȼ���������
	// ++�ڲ������ĺ��棬�Ȳ������㣬Ȼ������

	cout << sum << endl;
	cout << sum1 << endl;
	cout << i << endl;
	cout << j << endl;




	return 0;
}