#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;

/*
	copy�㷨 ��������ָ����Χ��Ԫ�ؿ�������һ������
	@param beg ������ʼ������
	@param end ��������������
	@param dest Ŀ����ʼ������
*/
// copy(iterator beg, iterator end, iterator dest)

void test01() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int> v1;
	v1.resize(v.size());

	copy(v.begin(), v.end(), v1.begin());
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << " "; });
	cout << endl;

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

/*
	replace�㷨 ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
	@param beg ������ʼ������
	@param end ��������������
	@param oldvalue ��Ԫ��
	@param newvalue ��Ԫ��
*/
// replace(iterator beg, iterator end, oldvalue, newvalue)

/*
	replace_if�㷨 ��������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
	@param beg ������ʼ������
	@param end ��������������
	@param callback�����ص�����ν��(����Bool���͵ĺ�������)
	@param oldvalue ��Ԫ��
*/
// replace_if(iterator beg, iterator end, _callback, newvalue)

class RepalceIf {
public:
	bool operator()(int val) {
		return val > 5;
	}
};

void test02() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	// �������е�3�滻��300
	replace(v.begin(), v.end(), 3, 300);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// �����д���5��ֵ���滻��2000
	replace_if(v.begin(), v.end(), RepalceIf(), 2000);
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

/*
	swap�㷨 ��������������Ԫ��
	@param c1����1
	@param c2����2
*/
// swap(container c1, container c2)
void test03() {

	vector<int> v;
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
		v1.push_back(i + 10);
	}

	cout << "����ǰ���ݣ�" << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	swap(v, v1);

	cout << "���������ݣ�" << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

}

// ���õĿ������滻�㷨
int main() {

	test03();

	return 0;
}