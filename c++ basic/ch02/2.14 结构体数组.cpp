#include <iostream>
#include <string>
using namespace std;

struct student {
	string name;	// ����
	int age;		// ����
};

// ����һ��Ա���ṹ��
struct emp {
	string name;
	int age;
	double salary;
};

// ��ʾ�ṹ������
int main() {

	//// ����ѧ���ṹ������
	//student stus[2] = {
	//	{"tom", 18},
	//	{"kitty", 28}
	//};

	//// ���Ԫ�ص���Ϣ
	//cout << stus[0].name << "\t" << stus[0].age << endl;
	//cout << stus[1].name << "\t" << stus[1].age << endl;

	// ����������һ���ṹ����������Ա������Ϣ�����������䡢н�ʣ�
	// ¼��3��Ա������Ϣ������ӡ3��Ա������Ϣ��

	emp emps[3];

	for (int i = 0; i < 3; i++) {

		cout << "������� " << i + 1 << " ��Ա����������" << endl;
		string name;
		cin >> name;

		cout << "������� " << i + 1 << " ��Ա�������䣺" << endl;
		int age;
		cin >> age;

		cout << "������� " << i + 1 << " ��Ա����н�ʣ�" << endl;
		double salary;
		cin >> salary;

		// ����һ��Ա���ṹ�����
		emp employee = { name , age, salary};
		emps[i] = employee;
	}

	cout << "===============" << endl;

	// ���3��Ա������Ϣ
	for (int i = 0; i < 3; i++) {
		emp employee = emps[i];
		cout << "������" << employee.name << endl;
		cout << "���䣺" << employee.age << endl;
		cout << "н�ʣ�" << employee.salary << endl;
		cout << "===============" << endl;
	}


	return 0;
}