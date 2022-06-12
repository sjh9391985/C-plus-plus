#include <iostream>

using namespace std;

int main() {

	/*
		C++ : 객체지향 프로그래밍
		- 컴파일 시간이 아닌실행 시간에 어떠한 결정을 내릴 수 있음.
		- OOP : 배열 생성 시 배열의 크기를 실행 시간에 결정
	*/

	// 포인터 : 사용할 주소에 이름을 붙임.
	// 포인터는 포인터의 이름이 주소를 나타냅니다.
	// 간접값 연산자, 간접 참조 연산자 '*' 를 통해 나타냄

	// 2가지 방법 둘다 무관
	int	*a; // C style
	int* b; // C++ style
	int* c, d; // c는 포인터 변수, d는 일반 int형 변수로 선언됨.

	// ex)
	int  i = 6;
	int* j; // 포인터는 위치를 나타냄

	j = &i;

	cout << "i의 값 = " << i << endl; 
	cout << "*j의 값 = " << *j << endl;

	cout << "i의 주소값 = " << &i << endl;
	cout << "*j의 주소값 = " << j << endl;



	return 0;
}