#include <iostream>
using namespace std;

// �����Լ���ʼ��ָ�����
int main() {

	// ����ָ�����
	char* ch_ptr;
	short* s_ptr;
	int* i_ptr;
	double* d_ptr;

    // 32λϵͳ ָ��ռ4���ֽڣ�64λ 8���ֽ�
	cout << sizeof(ch_ptr) << endl;
	cout << sizeof(s_ptr) << endl;
	cout << sizeof(i_ptr) << endl;
	cout << sizeof(d_ptr) << endl;

	// ָ������ĳ�ʼ��
	int num = 50;
	int* p = &num;

	cout << p << endl;
	cout << &num << endl;


    double d = 2.0;
    double* pt_d;
    pt_d = &d;

    cout << pt_d << endl;
    cout << &d << endl;

	return 0;
}