#include <iostream>
using namespace std;

/*
	�������ص�ԭ�����ڱ�����������һ�ּ�����name decoration(��������),
	name mangling(���ƽ���)��
*/
// func_v
void func() {
}
// func_i
void func(int a) {
}
// func_d
void func(double d) {
}
// func_i_d
void func(int a, double b) {
}
// func_d_i
void func(double a, int b) {
}

//extern "C" void fun() {}
//extern "C" void fun(int v) {}

//extern "C" {
//	void fun() {}
//	void fun(int v) {}
//}

extern "C" void fun();
extern "C" void fun(int v);

// extern "C" : ��extern "C"�����εĴ���ᰴ��C���Եķ�ʽȥ���롣 
int main() {



	return 0;
}

extern "C" void fun() {

}
extern "C" void fun(int v) {

}