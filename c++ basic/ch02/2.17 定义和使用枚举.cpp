#include <iostream>
using namespace std;

// ����һ��ö�����ͣ���ɫ�ķ��ų�����
enum Colors { red, green, blue = 4, yellow, purple };

enum  { red1, green1, blue1 };

int main() {

	// const �ؼ��֣��޶��� �������Ǵ������ų���
	const int Months = 12;	// ��ʾһ���е��·�����
	cout << Months << endl;

	// �޸�Months��ֵ
	// Months = 20;		// ����ģ�const���ε������ǲ��ܱ��޸ĵġ�

	// ö�٣���һ���������ͣ����ڴ���һϵ����صķ��ų�����
	// ����ö�����͵ı���
	Colors color = red;
	cout << color << endl;
	cout << red << endl;

	// color = 5;
	color = Colors(5);
	cout << color << endl;

	// ö������ֵ�����Զ�����Ϊint���Ͳ�������
	int num = blue;
	num = green + 1;

	color = Colors(200);	// û�����壬��Ϊֵ����ö�ٵķ�Χ�ڡ�
	cout << color << endl;


	int col = green1;
	switch (col) {
		case green1: 
			cout << "green1" << endl;
			break;
		case red1:
			cout << "red1" << endl;
			break;
		case blue1:
			cout << "blue1" << endl;
			break;
		default:
			break;
	}


	return 0;
}