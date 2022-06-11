#include <iostream>
#include <cstring> 

using namespace std;

int main() {

	// 공용체(union)
	// 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.
	union MyUnion {
		int intVal;
		long longVal;
		float floatVal;
	};

	/*
		구조체와 달리 공용체는 한번에 한가지 데이터형만 보관이 가능
		여러 데이터형을 사용은 가능하지만 동시에 사용불가
		장점: 메모리 절약
	*/
	MyUnion test;
	test.intVal = 3;
	test.longVal = 33;
	test.floatVal = 3.3;

	
	//	열거체(enum)
	//	기호 상수를 만드는 것에 대한 또다른 방법
	enum spectrum { red, orange, yellow, green, blue, violet, indigo, ultraviolet };
	/*
		1. spectrum을 새로운 데이터형 이름으로 만듭니다.
		2. red, orange, yellow .. 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만듭니다.

	*/
	
	spectrum a = orange; //열거자들끼리의 산술은 지원X
	int temp = blue; // 정수 데이터 타입에 열거자를 대입 할수있음

	enum spectrum1 { red = 0, orange = 1, yellow = 4, green, blue, violet, indigo, ultraviolet };
	/*
		열거자 데이터를 초기화 할 수 있음
		초기화하지 않은 데이터는 값을 1씩 더해서 값이 들어감
	*/

	return 0;