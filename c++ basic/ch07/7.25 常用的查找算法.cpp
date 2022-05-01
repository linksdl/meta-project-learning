#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

/*
	adjacent_find�㷨 ���������ظ�Ԫ��
	@param beg ������ʼ������
	@param end ��������������
	@param  _callback �ص���������ν��(����bool���͵ĺ�������)
	@return ��������Ԫ�صĵ�һ��λ�õĵ�����
*/
// adjacent_find(iterator beg, iterator end, _callback);

void test01() {

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);

	vector<int>::iterator ret = adjacent_find(v.begin(), v.end());
	if (ret != v.end()) {
		cout << "�ҵ������ڵ��ظ�Ԫ�أ�" << *ret << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}

}

/*
	binary_search�㷨 ���ֲ��ҷ�
	ע��: �����������в�����
	@param beg ������ʼ������
	@param end ��������������
	@param value ���ҵ�Ԫ��
	@return bool ���ҷ���true ����false
*/
// bool binary_search(iterator beg, iterator end, value);
void test02() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	// v.push_back(3);

	bool ret = binary_search(v.begin(), v.end(), 9);
	if (ret) {
		cout << "�ҵ���" << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}
}

/*
	count�㷨 ͳ��Ԫ�س��ִ���
	@param beg ������ʼ������
	@param end ��������������
	@param  value�ص���������ν��(����bool���͵ĺ�������)
	@return int����Ԫ�ظ���
*/
//count(iterator beg, iterator end, value);
/*
count_if�㷨 ͳ��Ԫ�س��ִ���
	@param beg ������ʼ������
	@param end ��������������
	@param  callback �ص���������ν��(����bool���͵ĺ�������)
	@return int����Ԫ�ظ���
*/
//count_if(iterator beg, iterator end, _callback);

void test03() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);

	int num = count(v.begin(), v.end(), 5);
	cout << "5Ԫ�صĸ���Ϊ��" << num << endl;
}

class GreaterFive {
public:
	bool operator()(int val) {
		return val >= 5;
	}
};

void test04() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);
	// 0 1 2 3 4 5 6 7 8 9 5 5 5 5

	int num = count_if(v.begin(), v.end(), GreaterFive());
	cout << "���ڵ���5��Ԫ�صĸ���Ϊ��" << num << endl;
}


// ���õĲ����㷨
int main() {

	test04();

	return 0;
}