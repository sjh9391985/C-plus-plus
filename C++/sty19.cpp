#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

int main() {

	/*
		함수의 다형 : 다양한 형태를 지닌 함수

		함수의 오버로딩 : 여러 개의 함수를 같은 이름으로 연결
		- 파라미터의 타입과 함수의 리턴 타입이 다르면 안됨.
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