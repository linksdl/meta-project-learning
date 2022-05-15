#include <iostream>
#include <vector>
using namespace std;

/*
���캯��
vector<T> v; //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
vector(v.begin(), v.end());//��v[begin(), end())�����е�Ԫ�ؿ���������
vector(n, elem);//���캯����n��elem����������
vector(const vector &vec);//�������캯����

��ֵ
assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
assign(n, elem);//��n��elem������ֵ������
vector& operator=(const vector  &vec);//���صȺŲ�����
swap(vec);// ��vec�뱾���Ԫ�ػ�����
*/

void printVector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

    for(vector<int>::iterator it1 = v.begin(); it1 != v.end(); it1++) {
        cout << *it1 << " ";
    }
}




void test01() {
	vector<int> v;
	cout << "��ʼ������" << v.capacity() << endl;

	for (int i = 0; i < 10; i++) {
		v.push_back(i);
		cout << v.capacity() << endl; // v.capacity()��ȡ����������
	}
}

void test02() {
	vector<int> v;	// Ĭ�Ϲ���
	vector<int> v1(10, 100);	// 10 ��100
	printVector(v1);

	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);

	vector<int> v3(v2);
	printVector(v3);
}

void test03() {
	int arr[] = { 2, 3, 4, 1, 9 };
	vector<int> v(arr, arr + sizeof(arr) / sizeof(int));

	vector<int> v1 = v;
	printVector(v1);

	vector<int> v2;
	v2.assign(v1.begin()+1, v1.end());
	printVector(v2);

	vector<int> v3(10, 100);

	// v2 �� v3�����ݽ��л���
	v3.swap(v2);
	printVector(v2);
	printVector(v3);
}


// vector����͸�ֵ����
int main() {

	test03();

	return 0;
}