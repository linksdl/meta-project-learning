#include <iostream>
using namespace std;

// ��ʾ����·��ʱ��Ľṹ��
struct s_time {
	int hours;	// Сʱ
	int mins;	// ����
};

// ��������ʱ��ĺ�
const s_time & sum(s_time& total, const s_time& t1, const s_time& t2) {
	total.mins = (t1.mins + t2.mins) % 60;
	total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / 60;
	return total;
}

// ��ʾʱ��
void show_time(const s_time& t) { 
	cout << t.hours << " Сʱ�� " << t.mins << " ����" << endl;
}

int getSum(int a, int b) {
	return a + b;
}

int& func() {
	static int a = 10;
	return a;
}

// ������Ϊ��������ֵ
/*
	������Ϊ��������ֵ��ע�������Ҫ���ؾֲ����������á����ⷵ�غ�������ʱ���ٴ��ڵ��ڴ浥Ԫ�����á�
*/
int main() {

	s_time t1 = { 2, 40 };
	s_time t2 = { 1, 50 };
	/*s_time ret = sum(ret, t1, t2);
	show_time(ret);*/
	s_time ret;

	// sum(ret, t1, t2) = t2;
	// sum(ret, t1, t2);   ret = t2;
	// ��ֵ�������߱����ǿ����޸ĵ���ֵ��

	// getSum(1, 2) = 10;

	int & ref = func();
	cout << ref << endl;
	cout << ref << endl;
	cout << ref << endl;
	cout << ref << endl;

	return 0;
}