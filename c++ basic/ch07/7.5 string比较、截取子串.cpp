#include <iostream>
#include <vector>
using namespace std;

/*
compare������>ʱ���� 1��<ʱ���� -1��==ʱ���� 0��
�Ƚ����ִ�Сд���Ƚ�ʱ�ο��ֵ�˳����Խǰ���ԽС��
��д��A��Сд��aС��
int compare(const string& s) const;//���ַ���s�Ƚ�
int compare(const char* s) const;//���ַ���s�Ƚ�
*/

void test01() {

	string str1 = "abcde";
	string str2 = "Abcdef";

	int ret = str1.compare(str2);

	if (ret == 0) {
		cout << "str1 == str2" << endl;
	}
	else if (ret == 1) {
		cout << "str1 > str2" << endl;
	}
	else if (ret == -1) {
		cout << "str1 < str2" << endl;
	}
}

// string substr(int pos = 0, int n = npos) const;//������pos��ʼ��n���ַ���ɵ��ַ���
void test02() {

	string str = "abcdefg";

	string subStr = str.substr(2, 3);

	cout << subStr << endl;

	string email = "gaojing@nowcoder.com";

	// ��ȡ@������
	int pos = email.find("@");	// pos = 7

	string userName = email.substr(0, pos);
	cout << userName << endl;

}

// ����
void test03() {

	string str = "www.nowcoder.com.cn";

	vector<string> v;

	int pos = -1;
	int start = 0;
	while (true) {

		pos = str.find(".", start);
		if (pos == -1) {

			string subStr = str.substr(start, str.size() - start);
			v.push_back(subStr);
			break;
		}

		string subStr = str.substr(start, pos - start);
		v.push_back(subStr);
		start = pos + 1;
	}

	for (vector<string>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

}



// string�Ƚϡ���ȡ�Ӵ�
int main() {

	test03();


	return 0;
}