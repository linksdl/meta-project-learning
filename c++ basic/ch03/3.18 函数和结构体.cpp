#include <iostream>
using namespace std;

/*
	�ܽ᣺ʹ�ýṹ���̵�ʱ�򣬿��԰ѽṹ�嵱����ͨ�ı�������
	ȱ�㣺�ṹ�������Ϊ�������ݵ�ʱ������ṹ������̫�󣬻�ռ�ô������ڴ档
*/

// ����һ��ʱ��ṹ��
struct s_time {
	int hours;	// Сʱ	
	int mins;	// ����
};

// �����ͽṹ��
// ����  A - B 2Сʱ50����   B - A 1Сʱ30���ӡ�
s_time sum(s_time t1, s_time t2) {

	// ����һ���͵Ľṹ�����
	s_time total;
	total.mins = (t1.mins + t2.mins) % 60;
	total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / 60;

	return total;
}

// ��ʾʱ��ĺ���
void show_time(s_time t) {
	cout << t.hours << " Сʱ, " << t.mins << " ���ӡ�" << endl;
}

int main() {

	// ���������ṹ�����
	s_time t1 = { 2, 50 };
	s_time t2 = { 1, 30 };

	// �����ܹ���·�̵�ʱ���
	s_time total = sum(t1, t2);

	show_time(total);

	return 0;
}