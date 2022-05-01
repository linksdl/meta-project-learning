#include <iostream>
#include <vector>
#include <list>
using namespace std;

// ����1 ����swap�����ڴ�
void test01() {

	vector<int> v;

	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	}
	cout << "size = " << v.size() << endl;		// 100000
	cout << "capacity = " << v.capacity() << endl;	// 138000+

	v.resize(3);
	cout << "size = " << v.size() << endl;		// 3
	cout << "capacity = " << v.capacity() << endl;	// 138000+

	// ����swap���������ڴ�
	vector<int>(v).swap(v);
	cout << "size = " << v.size() << endl;		// 3
	cout << "capacity = " << v.capacity() << endl;	// 3
}

// ����2 ���� reserve��Ԥ���ڴ�ռ�
void test02() {
	// reserve	Ԥ���ռ�
	// reverse  ��ת

	vector<int> v;

	v.reserve(100000);	// ��ǰԤ�����ռ�

	// ͳ�����100000���ݣ����¿��ٿռ����
	int* p = nullptr;
	int num = 0;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}

	cout << "num = " << num << endl;
}

// ����3 �������
void test03() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// ������������ʱ�
	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// ����ж�һ�������ĵ������Ƿ�֧���������
	vector<int>::iterator itBegin = v.begin();
	itBegin++;
	itBegin--;
	itBegin = itBegin + 2;

	list<int> li;
	li.push_back(10);
	li.push_back(10);

	list<int>::iterator lBegin = li.begin();
	lBegin++;
	lBegin--;
	// lBegin = lBegin + 2; list��������֧���������
}



// vector����
int main() {

	test03();

	return 0;
}