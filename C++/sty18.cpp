#include <iostream>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main() {

	/*
		����(reference)
		- �̸� ���ǵ� ������ ���� �̸� ��� ����� �� �ִ� ��� �̸�
	*/

	int a;
	int& b = a; // a�� ���� �������� (��������)

	int wallet1 = 100;
	int wallet2 = 200;

	return 0;
}

// ������ �����ϴ� ���
void swapA(int& a, int& b) {
	int temp;

	temp = a; 
	a = b; 
	b = temp;
}