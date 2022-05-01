#include <iostream>
using namespace std;

// ����һ����ʾ����·��ʱ��Ľṹ��
struct s_time {
	int hours;	// Сʱ
	int mins;	// ����
};

// ����һ����������������ʱ����ܺ�
s_time sum(const s_time & t1, const s_time & t2) {
	s_time total;
	total.mins = (t1.mins + t2.mins) % 60;
	total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / 60;
	return total;
}

// ����һ��������������ʾʱ����Ϣ
void show_time(const s_time & t) { // s_time & t = total;
	// t.hours = 10;
	cout << t.hours << " Сʱ�� " << t.mins << " ����" << endl;
}

// ���úͽṹ��
int main() {

	// ����һ���ṹ�����
	//s_time s = {3, 20};
	//// �����ṹ�����������
	//s_time& rs = s;
	//rs.hours = 5;
	//rs.mins = 30;
	//cout << s.hours << " : " << s.mins << endl;

	// ��������ʱ��ṹ�����
	s_time s1 = { 2, 40 };
	s_time s2 = { 1, 30 };
	s_time total = sum(s1, s2);
	show_time(total);
	
	return 0;
}
/*
	ʹ�����ò�����������Ҫ��ԭ��
	1.�ܹ��޸ĺ����ⲿ�����ݡ�
	2.ͨ���������ö������������ݣ�û���˸����Ŀ�������߳���������ٶȡ�

	ָ��ԭ��
		1.��ʹ�ô��ݵ�ֵ�������޸ĵĺ���
			a.������ݱȽ�С�������õĻ����������ͻ���С�͵Ľṹ�壬��ֵ���ݡ�
			b.������������飬ʹ��ָ�룬ָ������Ϊָ��const��ָ��
			c.������ݱȽϴ�������͵Ľṹ�壬ʹ��constָ�����const���á�
			d.��������������ʹ��const���á�
		2.��ʹ�ô��ݵ�ֵҪ���޸ĵĺ���
			a.����������������ͣ�ʹ��ָ�롣 fixit(&x) 
			b.������������飬ֻ��ʹ��ָ�롣
			c.��������ǽṹ��ʹ�����û���ָ�롣
			d.��������������ʹ�����á�

*/