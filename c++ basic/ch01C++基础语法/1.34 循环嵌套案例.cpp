#include <iostream>

using namespace std;

// ѭ��Ƕ�׵İ���
int main() {

	// 1.��ӡ�žų˷���
	/*for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " X " << i << " = " << i*j << "\t";
		}
		cout << endl;
	}*/

	// 2. ���1-100֮�������
	for (int i = 2; i <= 100; i++) {

		bool flag = true;

		// �ж�i�Ƿ�������
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				// ��������
				flag = false;
				break;
			}
		}

		// ������
		if (flag) {
			cout << i << endl;
		}

	}


	return 0;
}