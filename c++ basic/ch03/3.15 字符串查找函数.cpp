#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

// �ַ������Һ���
/*
	char * strstr(const char * str, const char * substr);
	���ã���str�в���substr��һ�γ��ֵ�λ�ã���ַ��
*/
int main() {

	// ����һ���ַ���
	/*char buf[20] = "helloworld";

	char* s = nullptr;

	s = strstr(buf, "wo");

	if (s == nullptr) {
		cout << "û�в��ҵ�" << endl;
	}
	else {
		cout << s << endl;
	}*/

	// ���󣺸���һ���ַ��������ַ����е���ʲ��ҵ�������ʹ��*�滻
	// ����һ���ַ���
	char buf[30] = "shadan sb, hello, sb";	// "shadan **, hello, **"

	char* ret = nullptr;

	while (ret = strstr(buf, "sb")) {
		strncpy(ret, "**", 2);
	}

	//while (true) {

	//	char* ret = strstr(buf, "sb");

	//	if (ret == nullptr) {
	//		cout << "û�в��ҵ�" << endl;
	//		break;
	//	}
	//	else {
	//		strncpy(ret, "**", 2);
	//	}

	//}

	cout << buf << endl;


	return 0;
}