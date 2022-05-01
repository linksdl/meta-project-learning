#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
using namespace std;

/*
	accumulate�㷨 ��������Ԫ���ۼ��ܺ�
	@param beg ������ʼ������
	@param end ��������������
	@param value�ۼ�ֵ
*/
// accumulate(iterator beg, iterator end, value)
/*
	fill�㷨 �����������Ԫ��
	@param beg ������ʼ������
	@param end ��������������
	@param value t���Ԫ��
*/
// fill(iterator beg, iterator end, value)

void test01() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	int sum = accumulate(v.begin(), v.end(), 1000);
	cout << sum << endl;

}

void test02() {

	vector<int> v;
	v.resize(10);
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
	cout << endl;

	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
	cout << endl;
}


// ���õ����������㷨
int main() {

	test02();

	return 0;
}