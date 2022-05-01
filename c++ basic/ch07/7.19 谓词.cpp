#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ν�ʣ�ָ������ͨ���������Ƿº������������󣩵ķ���ֵ��bool����
// ν��һԪν�ʣ�һ������������Ԫν�ʣ�����������
// ν�ʿ�����һ���ж�ʽ

class Greater20 {
public:

	bool operator()(int val) {
		return val > 20;
	}

};

class myCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

void test01() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	// �ҵ�һ������20��Ԫ��
	vector<int>::iterator ret = find_if(v.begin(), v.end(), Greater20());
	if (ret != v.end()) {
		cout << "�ҵ��˴���20�ĵ�һ��Ԫ�أ�ֵΪ��" << *ret << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}

	// ��Ԫν��
	sort(v.begin(), v.end(), myCompare());

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

}

int main() {

	test01();

	return 0;
}