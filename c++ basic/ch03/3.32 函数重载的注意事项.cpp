#include <iostream>
using namespace std;

// �������ص�ע������
/*
	�������أ�C++�����ڳ����г���ͬ���ĺ�����ֻҪ���ǵĲ����б������꣩��ͬ��
	�������ĸ��������������͡�����������˳��
	�ѹ�����ͬ�������Ƶ�һϵ�еĺ����������Ǻ�������ͬ���γ����صĹ�ϵ��
*/
//void show(int num) {
//	cout << "void show(int num)" << endl;
//}
//
//void show(const int num) {
//	cout << "void show(const int num)" << endl;
//}

void func(int& a) {	// int & a = 10;
	cout << "void func(int& a)" << endl;
}

//void func(int a) {
//	cout << "void func(int a)" << endl;
//}

void func(const int& a) {	// const int & a = 10;
	cout << "void func(const int& a)" << endl;
}

void MyFunc(int a, int b = 100) {

}

void MyFunc(int a) {

}

int main() {

	// 1.const��ͨ����
	// ����ֵ���ݣ���Ϊ�β��Ǹ��ƴ��ݽ������ģ������ڲ��޷��ı�ʵ�Ρ���ô�Ӳ���const����ʵ��û���κε�����
	// �����ĵ���ѡ���Ǹ���ʵ�ν��еġ�
	/*int a = 10;
	show(a);
	const int b = 20;
	show(b);*/

	// 2.����������
	/*int num = 10;
	int& rnum = num;
	func(rnum);*/

	// 3.Ĭ�ϲ����ͺ�������һ��ʹ�á�Ҫע������Ե����⡣
	// MyFunc(10);

	return 0;
}