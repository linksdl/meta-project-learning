#include <iostream>
using namespace std;

// ���������Σ�main�������Σ�
/*
	main���������в���������ֻ����2��������
	int main(int argc, char * argv[]);
	int main(int argc, char ** argv);

	int argc = argument count: ��ʾ���ݸ�main�����Ĳ����ĸ�����
	char * argv[] = argument vector: ��ʾ���ݸ�main����ָ�����飬�����������еĲ����ġ�

	�������Ĳ��� argv[0] ��ʾ�����������·����
*/
int main(int argc, char * argv[]) {

	cout << argc << endl;

	// �����ַ�������
	for (int i = 0; i < argc; i++) {
		cout << argv[i] << endl;
	}

	return 0;
}