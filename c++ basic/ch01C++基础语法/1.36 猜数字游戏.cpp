#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
	�����ֵ���Ϸ[1-100]
*/
int main() {

	srand(time(0));	// �������������������
	int guessNum = rand() % 100 + 1;	// [1,100]
	
	/*
		����[m,n]�����
		r = rand() % (n - m + 1) + m
	*/
	// cout << guessNum << endl;

	// ����һ������ʾʣ��Ĳ²�Ĵ���
	int count = 6;

	while (count > 0) {

		count--;
		cout << "��������һ�����֣�" << endl;
		int inputNum;
		cin >> inputNum;

		// �ж�
		if (inputNum == guessNum) {
			// �¶���
			cout << "��ϲ�����¶��ˣ�" << endl;
			break;
		} else if(inputNum > guessNum){
			cout << "���ˣ���ʣ�� "<< count << " �λ���" << endl;
		} else  {
			cout << "С�ˣ���ʣ�� " << count << " �λ���" << endl;
		}
	}


	return 0;
}