#include <iostream>
using namespace std;

// ���庯��
void changeNumValue(int num) {
	num = 1000;
}

void changeNumValue1(int * p) {
	*p = 1000;
}

// ָ�������Ϊ��������������
int main() {

	// ��ͨ������Ϊ��������������
	// ���󣺶���һ������������������һ����ͨ�������ں������޸���ͨ������ֵ��
	int num = 10;

	// changeNumValue(num);
//    changeNumValue(num)  // �����޸Ĳ�����ֵ
	changeNumValue1(&num);

	cout << "num = " << num << endl;


	return 0;
}
// �ܽ᣺ͨ����ͨ�����ں����ڲ��޸���ͨ������ֵ���ǲ����޸ĵġ�
// �����Ҫͨ�������ڲ��޸��ⲿ������ֵ����Ҫ�����ⲿ�����ĵ�ַ��
// �������ݲ��������򴫵ݣ���ֵ��
