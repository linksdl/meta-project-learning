#include <iostream>
#include <set>
using namespace std;

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	set<int> s;
	s.insert(10);
	s.insert(40);
	s.insert(40);
	s.insert(30);
	s.insert(12);
	s.insert(5);

	printSet(s);

	cout << "size : " << s.size() << endl;
}

// ���ң�ͳ��
void test02() {
	set<int> s;
	s.insert(10);
	s.insert(40);
	s.insert(40);
	s.insert(30);
	s.insert(12);
	s.insert(40);
	s.insert(5);
	
	set<int>::iterator pos = s.find(300);
	if (pos != s.end()) {
		cout << "�ҵ���Ԫ�أ�" << *pos << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}

	// ����set��˵��count�ķ���ֵҪô��0��Ҫô��1
	int num = s.count(40);
	cout << "40��Ԫ�صĸ���Ϊ��" << num << endl;

	// lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
	set<int>::iterator ret = s.lower_bound(30);
	if (ret != s.end()) {
		cout << "�ҵ���lower_bound��ֵΪ��" << *ret << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}

	// upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
	ret = s.upper_bound(30);
	if (ret != s.end()) {
		cout << "�ҵ���upper_bound��ֵΪ��" << *ret << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}

	// equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������
	pair<set<int>::iterator, set<int>::iterator> ret2 = s.equal_range(30);
	if (ret2.first != s.end()) {
		cout << "�ҵ���lower_bound��ֵΪ��" << *ret2.first << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}

	if (ret2.second != s.end()) {
		cout << "�ҵ���upper_bound��ֵΪ��" << *ret2.second << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}

}

// ����Ĵ���
void test03() {

	pair<string, int> p1("Tom", 18);
	cout << "������" << p1.first << endl;
	cout << "���䣺" << p1.second << endl;

	pair<string, int> p2 = make_pair("Jerry", 20);
	cout << "������" << p2.first << endl;
	cout << "���䣺" << p2.second << endl;

}

// set����
int main() {

	test03();

	return 0;
}