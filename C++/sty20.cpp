#include <iostream>

using namespace std;

template <class Any>
Any sum(Any, Any);
int main() {

	/*
		�Լ� ���ø�
		- ��ü���� ���������� ������ �� �ִ� �Ϲ������� �Լ��� ����
	*/

	int a = 3;
	int b = 4;
	cout << sum(a, b) << endl;

	float c = 3.14;
	float d = 1.592;

	cout << sum(c, d) << endl;

	/*
	* ���ø� �����ε��� ���ؼ� ��밡���� Any sum(int, Any)
	* cout << sum(a, c) << endl;
	*/

	return 0;
}

template <class Any>

Any sum(Any a, Any b) {
	return a + b;
}