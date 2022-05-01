#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>
using namespace std;


/*
	merge�㷨 ����Ԫ�غϲ������洢����һ������
	ע��:�������������������
	@param beg1 ����1��ʼ������
	@param end1 ����1����������
	@param beg2 ����2��ʼ������
	@param end2 ����2����������
	@param dest  Ŀ��������ʼ������
*/
// merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
void test01() {

	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	vector<int> vt;	// Ŀ������
	vt.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());

	// lambda���ʽ [](){} ��������
	for_each(vt.begin(), vt.end(), [](int val) {cout << val << " "; });

}

/*
	sort�㷨 ����Ԫ������
	@param beg ����1��ʼ������
	@param end ����1����������
	@param _callback �ص���������ν��(����bool���͵ĺ�������)
*/
// sort(iterator beg, iterator end, _callback)
void test02() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	sort(v.begin(), v.end(), greater<int>());

	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });

}

/*
	random_shuffle�㷨 ��ָ����Χ�ڵ�Ԫ�������������
	@param beg ������ʼ������
	@param end ��������������
*/
// random_shuffle(iterator beg, iterator end)
void test03() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
}

/*
	reverse�㷨 ��תָ����Χ��Ԫ��
	@param beg ������ʼ������
	@param end ��������������
*/
// reverse(iterator beg, iterator end)

void test04() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	v.push_back(100);
	v.push_back(50);

	cout << "��תǰ�����Ľ����" << endl;
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
	cout << endl;

	reverse(v.begin(), v.end());
	cout << "��ת������Ľ����" << endl;
	for_each(v.begin(), v.end(), [](int val) {cout << val << " "; });
	cout << endl;
}




// ���õ������㷨
int main() {

	// ���������
	srand((unsigned int)time(NULL));

	test04();

	return 0;
}