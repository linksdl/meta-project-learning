#include <iostream>

using namespace std;

/*
	continue:���Ա���ѭ���������´�ѭ�������������ѭ����
	break��continueʹ�ó�����
		break:ֻ��ʹ����switch��ѭ���
		continue��ֻ����ѭ����ʹ�á�
*/
int main() {


	//for (int i = 0; i < 6; i++) {
	//	if (i == 4) {
	//		continue;
	//	}
	//	cout << i << "\t";
	//}

	// ����������һ��������n(n > 1),����1~n֮�����������ĺ�
	int n;
	cout << "����һ��������n(n > 1): " << endl;
	cin >> n;

	int sum = 0; // �ۼӱ���

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			// ż��
			continue;
		}
		sum += i;
	}

	cout << "sum: " << sum << endl;




	return 0;
}