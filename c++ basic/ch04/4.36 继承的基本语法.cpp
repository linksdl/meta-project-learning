#include <iostream>
using namespace std;

// ����
class Person {
public:
	string name;	// ����
	int age;	// ����

	void eat() {
		cout << "�Է�" << endl;
	}

	void sleep() {
		cout << "˯��" << endl;
	}
};

class Student1 : public Person {
public:
	void study() {
		cout << "ѧϰ" << endl;
	}
};

class Teacher1 : public Person {
public:
	void teach() {
		cout << "��ѧ" << endl;
	}
};


// ѧ����
class Student {
public:
	string name;	// ����
	int age;	// ����

	void eat() {
		cout << "�Է�" << endl;
	}

	void sleep() {
		cout << "˯��" << endl;
	}

	void study() {
		cout << "ѧϰ" << endl;
	}
};

// ��ʦ��
class Teacher {
public:
	string name;	// ����
	int age;	// ����

	void eat() {
		cout << "�Է�" << endl;
	}

	void sleep() {
		cout << "˯��" << endl;
	}

	void teach() {
		cout << "��ѧ" << endl;
	}
};

// �̳У�����������һ��������
/*
	������д�����ͬ�����Ժ���Ϊʱ������Щ���ݳ�ȡ��һ�����������У�
	��ô����������ٶ�����Щ���Ժ���Ϊ��ֻҪ�̳��Ǹ��༴�ɡ�

	�̳еĸ�ʽ��
	class ���� : �̳з�ʽ ���� {
	};

	���ࣺ���࣬����
	���ࣺ����Ϊ������

	�̳еĺô���
		1.����˴���ĸ�����
		2.����˴����ά����
		3.�������֮������˹�ϵ���Ƕ�̬��ǰ��

	�̳еı׶ˣ�
		�������������ˡ�
		������ԭ�򣺸��ھۣ������
		��ϣ������Ĺ�ϵ
		�ھۣ��Լ����һ�����������

*/
int main() {

	// ����һ��ѧ������
	Student1 stu;
	stu.name = "zs";
	stu.age = 20;
	cout << "name : " << stu.name << " age : " << stu.age << endl;
	stu.eat();
	stu.sleep();
	stu.study();


	return 0;
}