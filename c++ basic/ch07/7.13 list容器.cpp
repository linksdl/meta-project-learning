#include <iostream>
#include <list>
using namespace std;

void test01() {

	list<int> li;
	li.push_back(10);
	li.push_back(20);
	li.push_back(30);
	li.push_back(40);

	// ����
	for (list<int>::iterator it = li.begin(); it != li.end(); it++) {
		cout << *it << endl;
	}

	cout << "-----------------------" << endl;

	// ����
	for (list<int>::reverse_iterator it = li.rbegin(); it != li.rend(); it++) {
		cout << *it << endl;
	}

	list<int>::iterator it = li.begin();
	it++;
	it--;

	// it = it + 2;	// ��֧���������
}

void printList(const list<int>& li) {
	// ����
	for (list<int>::const_iterator it = li.begin(); it != li.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test02() {

	list<int> li(10, 100);
	printList(li);

	li.push_back(20);
	li.push_back(30);	// 100 ... 100 20 30
	li.push_front(30);
	li.push_front(20);	// 20 30 100 ... 100 20 30
	printList(li);

	li.pop_back();	// βɾ 20 30 100 ... 100 20
	printList(li);
	li.pop_front();	// ͷɾ 30 100 ... 100 20
	printList(li);

	// ����
	li.insert(li.begin(), 1000);
	printList(li);

	// ɾ��
	li.erase(li.begin());
	printList(li);

	li.remove(100);
	printList(li);

	li.clear();
	printList(li);

}

void test03() {
	list<int> li;
	li.push_back(10);
	li.push_back(20);
	li.push_back(30);
	li.push_front(100);
	li.push_front(200);
	li.push_front(300);

	printList(li);	// 300 200 100 10 20 30

	if (li.empty()) {
		cout << "liΪ��" << endl;
	}
	else {
		cout << "li��Ϊ�գ����ȣ�" << li.size() << endl;
	}

	// ��ȡ��һ��Ԫ�غ����һ��Ԫ��
	cout << "��һ��Ԫ�أ�" << li.front() << endl;
	cout << "���һ��Ԫ�أ�" << li.back() << endl;
}

// list����
int main() {

	test03();

	return 0;
}