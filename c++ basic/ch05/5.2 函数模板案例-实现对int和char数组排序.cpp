#include <iostream>
using namespace std;

// 1. T�����Ǳ������ T1��V ,ֻҪ��ѭ��ʶ���Ĺ淶
// 2. ���Ϳ����ж�������֮���ö��Ÿ��� template<typename T, typename T1>
// 3. T�ķ�Χ�����ĸ������ϾͿ������ĸ�������ʹ�ã������ĺ�����ʹ�ò���
template<typename T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

// template<class T>
template<typename T>
void mySort(T arr[], int len) {

	for (int i = 0; i < len; i++) {

		for (int j = i + 1; j < len; j++) {
			if (arr[i] < arr[j]) {
				mySwap(arr[i], arr[j]);
			}
		}

	}

}

template <class T>
void printArr(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}

// ʹ�ú���ģ��ʵ�ְ�����ʵ�ֶ� int �� char ���������
int main() {

	char chs[] = { 'a', 'b', 'c', 'd' };
	int len = sizeof(chs) / sizeof(char);
	mySort(chs, len);
	printArr(chs, len);

	cout << "============" << endl;

	int arr[] = { 10, 5, 90, 100, 32 };
	len = sizeof(arr) / sizeof(int);
	mySort(arr, len);
	printArr(arr, len);

	return 0;
}