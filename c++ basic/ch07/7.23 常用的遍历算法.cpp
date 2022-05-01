#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;


/*
	�����㷨 ��������Ԫ��
	@param beg ��ʼ������
	@param end ����������
	@param _callback  �����ص����ߺ�������
	@return ��������
*/
// for_each(iterator beg, iterator end, _callback);

void myPrint(int val) {
	cout << val << endl;
}

class MyPrint {
public:
	MyPrint() {
		m_count = 0;
	}
	void operator()(int val) {
		cout << val << endl;
		m_count++;
	}

	int m_count;
};

void test01() {
	
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	// for_each(v.begin(), v.end(), myPrint);
	for_each(v.begin(), v.end(), MyPrint());

}

// for_each()�з���ֵ
void test02() {
	
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	MyPrint mp = for_each(v.begin(), v.end(), MyPrint());
	cout << "mp �� m_count��ֵΪ��" << mp.m_count << endl;
}

class MyPrint2 : public binary_function<int, int, void> {
public:
	void operator()(int val, int start) const {
		cout << val + start << endl;
	}
};

// for_each���԰󶨲���
void test03() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), bind2nd(MyPrint2(), 1000));
}

/*
	transform�㷨 ��ָ����������Ԫ�ذ��˵���һ������
	ע�� : transform �����Ŀ�����������ڴ棬������Ҫ������ǰ������ڴ�
	@param beg1 Դ������ʼ������
	@param end1 Դ��������������
	@param beg2 Ŀ��������ʼ������
	@param _cakkback �ص��������ߺ�������
	@return ����Ŀ������������
*/
// transform(iterator beg1, iterator end1, iterator beg2, _callbakc)

class MyTransform {
public:
	int operator()(int val) {
		return val + 10;
	}
};

void test04() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int> vt;	// Ŀ������

	// ��ǰ������ڴ�
	vt.resize(v.size());

	transform(v.begin(), v.end(), vt.begin(), MyTransform());

	for_each(vt.begin(), vt.end(), myPrint);
}


// ���õı����㷨
int main() {

	test04();


	return 0;
}