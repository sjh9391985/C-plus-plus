#include <iostream>

using namespace std;

template <class Any>
Any sum(Any, Any);
int main() {

	/*
		함수 템플릿
		- 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
	*/

	int a = 3;
	int b = 4;
	cout << sum(a, b) << endl;

	float c = 3.14;
	float d = 1.592;

	cout << sum(c, d) << endl;

	/*
	* 템플릿 오버로딩을 통해서 사용가능함 Any sum(int, Any)
	* cout << sum(a, c) << endl;
	*/

	return 0;
}

template <class Any>

Any sum(Any a, Any b) {
	return a + b;
}