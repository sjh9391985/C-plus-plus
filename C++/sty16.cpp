#include <iostream>

using namespace std;

int func(int);

int main() {
	/*
		함수를 지시하는 포인터
		어떤 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용할 수 있음.

		1. 함수의 주소를 얻는다.
		2. 함수를 지시하는 포인터를 선언한다.
		3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출한다.
	*/

	// 함수의 주소를 얻기 위해선 함수의 소괄호를 생략하고 이름만 사용함
	cout << func << endl;

	int (*pf)(int); // 함수를 지시하는 포인터를 선언
	pf = func; // 포인터에 함수의 주소를 저장함.

	// pf가 함수의 역할을 할 수 있으므로 사용가능함.
	cout << (*pf)(3) << endl;

	return 0;
}

int func(int n) {
	return n + 1;
}