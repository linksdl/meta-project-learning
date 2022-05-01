#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
/*
	��������������
	1. �� bind2nd
	2. �̳� public binary_function<�������ͣ��������ͣ�����ֵ����>
	3. �� const
*/
class MyPrint : public binary_function<int,int,void>{
public:
	void operator()(int num, int start) const {
		// cout << num + start << endl;
		cout << "num = " << num << " start = " << start << " sum = " << num + start << endl;
	}
};

void test01() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	cout << "��������ʼ�ۼ�ֵ��" << endl;
	int start;
	cin >> start;

	for_each(v.begin(), v.end(), bind2nd(MyPrint(), start));	// �Ƽ�ʹ��
	// for_each(v.begin(), v.end(), bind1st(MyPrint(), start));
}

class GreaterFiver : public unary_function<int, bool>{
public:
	bool operator()(int val) const{
		return val > 5;
	}
};

void test02() {

	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	/*vector<int>::iterator ret = find_if(v.begin(), v.end(), GreaterFiver());
	if (ret != v.end()) {
		cout << "�ҵ��˴���5������Ϊ��" << *ret << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}*/

	// һԪȡ��������
	// vector<int>::iterator ret = find_if(v.begin(), v.end(), not1(GreaterFiver()));
	vector<int>::iterator ret = find_if(v.begin(), v.end(), not1(bind2nd(greater<int>(), 5)));
	if (ret != v.end()) {
		cout << "�ҵ���С��5������Ϊ��" << *ret << endl;
	}
	else {
		cout << "δ�ҵ�" << endl;
	}

	// ��Ԫȡ��������
	sort(v.begin(), v.end(), not2(less<int>()));

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

}


// ��������������  ȡ��������
int main() {

	test02();

	return 0;
}