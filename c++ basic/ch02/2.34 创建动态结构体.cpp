#include <iostream>
#include <string>
using namespace std;

// ����һ���ṹ��
struct student {
	string name;	// ����
	int age;		// ����
	double height;	// ���
};

// ������̬�ṹ�壬�����ʶ�̬�ṹ���еĳ�Ա������
/*
	���ѡ�� ����������.���ͼ�ͷ�����(->)
	�����ʶ����һ���ṹ�����������ôӦ��ʹ�õ�������
	�����ʶ����һ��ָ�����͵ı�������ôӦ��ʹ�ü�ͷ�����
*/
int main() {

	/*student stu = { "tom", 20, 178.5 };
	student* p_stu = &stu;*/

	student * p_stu = new student;
	// 1.���ʷ�ʽһ
	(*p_stu).name = "hello";
	(*p_stu).age = 18;
	(*p_stu).height = 178.5;

	cout << (*p_stu).name << "\t" << (*p_stu).age << "\t" << (*p_stu).height << endl;

	// 2.���ʷ�ʽ��  ->
	p_stu->name = "kitty";
	p_stu->age = 20;
	p_stu->height = 180.0;

	cout << p_stu->name << "\t" << p_stu->age << "\t" << p_stu->height << endl;
	return 0;
}