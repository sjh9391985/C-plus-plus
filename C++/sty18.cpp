#include <iostream>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main() {

	/*
		참조(reference)
		- 미리 정의된 변수의 실제 이름 대신 사용할 수 있는 대용 이름
	*/

	int a;
	int& b = a; // a에 대한 참조변수 (참조전달)

	int wallet1 = 100;
	int wallet2 = 200;

	return 0;
}

// 참조로 전달하는 방식
void swapA(int& a, int& b) {
	int temp;

	temp = a; 
	a = b; 
	b = temp;
}