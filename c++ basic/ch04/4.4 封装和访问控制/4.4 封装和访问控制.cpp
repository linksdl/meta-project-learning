#include <iostream>
#include "Student.h"
using namespace std;

/*
	private��ֹ����ֱ�ӷ��ʳ�Ա���ݣ������֮Ϊ�������ء�
	��װ�����ض�������Ժ�ʵ��ϸ�ڣ��������ṩ�������ʷ�ʽ��

	��װ�ĺô���
	1.����ʵ��ϸ�ڣ��ṩ�����ķ��ʷ�ʽ
	2.����˴���ĸ�����
	3.����˰�ȫ��

	private �� public protected �Ƿ��ʿ������η�
		private���ε�����ֻ���ڱ����з��ʡ�
		public���ε������ǹ����ģ�˭�����÷��ʡ�
		protected��ʾ�ܱ�����Ȩ�ޣ��̳����õıȽ϶ࡣ�����ܹ����ʸ����е�����
*/

// ��װ�ͷ��ʿ���
int main() {

	// ����ѧ������
	Student s;

	// �Գ�Ա�������и�ֵ
	/*s.m_Name = "zs";
	s.m_Age = -20;
	s.m_Id = 1001;*/

	s.setName("ls");
	s.setAge(20);
	s.setId(1002);

	cout << s.getName() << "\t" << s.getAge() << "\t" << s.getId() << endl;

	return 0;
}