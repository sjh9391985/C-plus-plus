#include <iostream>

using namespace std;

int main() {

	/*
		C++ : ��ü���� ���α׷���
		- ������ �ð��� �ƴѽ��� �ð��� ��� ������ ���� �� ����.
		- OOP : �迭 ���� �� �迭�� ũ�⸦ ���� �ð��� ����
	*/

	// ������ : ����� �ּҿ� �̸��� ����.
	// �����ʹ� �������� �̸��� �ּҸ� ��Ÿ���ϴ�.
	// ������ ������, ���� ���� ������ '*' �� ���� ��Ÿ��

	// 2���� ��� �Ѵ� ����
	int	*a; // C style
	int* b; // C++ style
	int* c, d; // c�� ������ ����, d�� �Ϲ� int�� ������ �����.

	// ex)
	int  i = 6;
	int* j; // �����ʹ� ��ġ�� ��Ÿ��

	j = &i;

	cout << "i�� �� = " << i << endl; 
	cout << "*j�� �� = " << *j << endl;

	cout << "i�� �ּҰ� = " << &i << endl;
	cout << "*j�� �ּҰ� = " << j << endl;



	return 0;
}