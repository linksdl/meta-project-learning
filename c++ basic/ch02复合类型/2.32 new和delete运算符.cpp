#include <iostream>
using namespace std;

// new �� delete �����
int main() {

	// ʹ�� new ����һ��int���͵Ŀռ�
//    typename * pointer_name = new typename;
	int * p = new int;
	*p = 100;
	cout << *p << endl;

	// ʹ�������Ժ���ڴ�����ͷ� === delete new ����ʹ�ã� ����ᷢ���ڴ�й©��memory leak��
    // ��Ҫ�ͷ��Ѿ��ͷŵ��ڴ��
    // ����ʹ��delete ���ͷ�������������õ��ڴ�
	delete p;	// �ͷŵ���pָ����ڴ棬���ǲ���ɾ��ָ�����p����p��������ָ����һ���·�����ڴ�顣


	return 0;
}