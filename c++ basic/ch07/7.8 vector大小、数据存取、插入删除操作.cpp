#include <iostream>
#include <vector>
using namespace std;

/*
size();//����������Ԫ�صĸ���
empty();//�ж������Ƿ�Ϊ��
resize(int num);//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
resize(int num, elem);//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á����������̣���ĩβ����������>�ȵ�Ԫ�ر�ɾ����
capacity();//����������
reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�
*/

/*
at(int idx); //��������idx��ָ�����ݣ����idxԽ�磬�׳�out_of_range�쳣
operator[];//��������idx��ָ�����ݣ�Խ��ʱ������ֱ�ӱ���
front();//���������е�һ������Ԫ��
back();//�������������һ������Ԫ��
*/

void printVector(vector<int> & v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	int arr[] = { 2, 3, 4, 1, 9 };
	vector<int> v(arr, arr + sizeof(arr) / sizeof(int));

	if (v.empty()) {
		cout << "vΪ��" << endl;
	}
	else {
		cout << "v��Ϊ��" << endl;
		cout << "size = " << v.size() << endl;
	}

	printVector(v);

	// v.resize(3);
	// v.resize(7);
	v.resize(7, 100);

	printVector(v);

	cout << v.at(2) << endl;
	cout << v[2] << endl;

	cout << "��һ��Ԫ��Ϊ��" << v.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << v.back() << endl;

}


/*
insert(const_iterator pos, int count,ele);//������ָ��λ��pos����count��Ԫ��ele
push_back(ele); //β������Ԫ��ele
pop_back();//ɾ�����һ��Ԫ��
erase(const_iterator start, const_iterator end);//ɾ����������start��end֮���Ԫ��
erase(const_iterator pos);//ɾ��������ָ���Ԫ��
clear();//ɾ������������Ԫ��
*/

void test02() {
	int arr[] = { 2, 3, 4, 1, 9 };
	vector<int> v(arr, arr + sizeof(arr) / sizeof(int));

	v.insert(v.begin(), 100);	// 100 2 3 4 1 9
	v.insert(v.begin(), 2, 1000);	// 1000 1000 100 2 3 4 1 9
	printVector(v);

	v.push_back(33);	// 1000 1000 100 2 3 4 1 9 33
	printVector(v);

	v.pop_back();
	printVector(v);	// 1000 1000 100 2 3 4 1 9 

	v.erase(v.begin());	
	printVector(v);	// 1000 100 2 3 4 1 9 

	v.clear();
	printVector(v);
}


// vector�Ĵ�С�����ݴ�ȡ�������ɾ������
int main() {

	test02();

	return 0;
}