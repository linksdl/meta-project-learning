#include <iostream>
#include <stdexcept>	// ��׼�쳣ͷ�ļ�
using namespace std;

class Person {
public:

	Person(int age) {
		if (age < 0 || age >= 150) {
			throw out_of_range("����Խ�磬������0~150֮��");
			// throw length_error("���ȳ���");
		}
		this->m_Age = age;
	}

	int m_Age;
};

int main() {

	/*Person p1(10);
	cout << p1.m_Age << endl;*/

	try {
		Person p2(150);
	}
	/*catch (out_of_range &e)  
	{
		cout << e.what() << endl;
	}*/
	catch (exception& e) {
		cout << e.what() << endl;
	}
	
	// cout << p2.m_Age << endl;



	return 0;
}