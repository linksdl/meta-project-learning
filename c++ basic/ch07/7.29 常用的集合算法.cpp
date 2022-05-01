#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

/*
	set_intersection�㷨 ������set���ϵĽ���
	ע��:�������ϱ�������������
	@param beg1 ����1��ʼ������
	@param end1 ����1����������
	@param beg2 ����2��ʼ������
	@param end2 ����2����������
	@param dest  Ŀ��������ʼ������
	@return Ŀ�����������һ��Ԫ�صĵ�������ַ
*/
// set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
/*
	set_union�㷨 ������set���ϵĲ���
	ע��:�������ϱ�������������
	@param beg1 ����1��ʼ������
	@param end1 ����1����������
	@param beg2 ����2��ʼ������
	@param end2 ����2����������
	@param dest  Ŀ��������ʼ������
	@return Ŀ�����������һ��Ԫ�صĵ�������ַ
*/
// set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
/*
	set_difference�㷨 ������set���ϵĲ
	ע��:�������ϱ�������������
	@param beg1 ����1��ʼ������
	@param end1 ����1����������
	@param beg2 ����2��ʼ������
	@param end2 ����2����������
	@param dest  Ŀ��������ʼ������
	@return Ŀ�����������һ��Ԫ�صĵ�������ַ
*/
// set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)

void test01() {

	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vt;
	vt.resize(min(v1.size(), v2.size()));

	// ����
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());

	for_each(vt.begin(), itEnd, [](int val) {cout << val << " "; });
	cout << endl;

}

void test02() {

	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vt;
	vt.resize(v1.size()+v2.size());

	// ����
	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());

	for_each(vt.begin(), itEnd, [](int val) {cout << val << " "; });
	cout << endl;

}

void test03() {

	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vt;
	vt.resize(max(v1.size(), v2.size()));

	// v1 �� v2�
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());

	for_each(vt.begin(), itEnd, [](int val) {cout << val << " "; });
	cout << endl;

	vector<int> vt1;
	vt1.resize(max(v1.size(), v2.size()));

	// v2 �� v1�
	vector<int>::iterator itEnd1 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vt1.begin());
	for_each(vt1.begin(), itEnd1, [](int val) {cout << val << " "; });
	cout << endl;



}


// �����ļ����㷨
int main() {

	test03();

	return 0;
}