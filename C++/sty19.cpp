#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

int main() {

	/*
		�Լ��� ���� : �پ��� ���¸� ���� �Լ�

		�Լ��� �����ε� : ���� ���� �Լ��� ���� �̸����� ����
		- �Ķ������ Ÿ�԰� �Լ��� ���� Ÿ���� �ٸ��� �ȵ�.
		- 
	*/

	int a = 3; 
	int b = 2;
	float c = 3.0;
	float d = 2.0;

	sum(a, b);

	sum(c, d);

	return 0;
}

int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}