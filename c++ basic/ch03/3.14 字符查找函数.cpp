#include <iostream>
#include <cstring>
using namespace std;

// �ַ����Һ��� 
/*
	char * strchr(const char * s , int c) : ���ַ���s�в����ַ�c��һ�γ��ֵĵ�ַ�� 
*/
int main() {

	// ����һ���ַ���
	char buf[20] = "helloworld";

	// ����һ��char *���͵ı��������ڽ��ղ��ҵ��ĵ�ַ
	char* p = nullptr;
	char* temp = buf;

	/*while (true) {
		p = strchr(temp, 'l');
		if (p == nullptr) {
			cout << "û�в��ҵ�" << endl;
			break;
		}
		else {
			cout << "����λ�ã�" << p - buf << endl;
			temp = p + 1;
		}
	}*/

	while (p = strchr(temp, 'l')) {
		cout << "����λ�ã�" << p - buf << endl;
		temp = p + 1;
	}
	

	



	return 0;
}