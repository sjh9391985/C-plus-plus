#include <iostream>

using namespace std;

void countDown(int);

int main() {

	// C++���� �Լ��� �ڱ� �ڽ��� ȣ���� �� �ֽ��ϴ�. : ���ȣ��, ����Լ�
	countDown(5);

}

void countDown(int n) {
	cout << "Counting..." << n << endl;
	if (n > 0) 
		countDown(n - 1);
	cout << n << "��° ����Լ�" << endl;
}