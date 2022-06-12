#include <iostream>

using namespace std;

int main() {

	/*
		new 연산자
		1. 어떤 데이터형을 원하는지 new 연산자에게 알려주면
		2. new 연산자는 그에 알맞은 크기의 메모리 블록을 찾아냄
		3. 그 블록의 주소를 리턴
	*/
	int* pointer = new int;

	/*
		delete 연산자
		1. 사용한 메모리를 다시 메모리 풀로 환수
		2. 환수된 메모리는 프로그램의 다른 부분에 다시 사용 가능
		new 사용시 반드시 delete 사용필요[메모리 누수를 막기위함]
	*/
	int* ps = new int; // 메모리 사용
	delete ps; // 메모리 환수

	/*
		delete 사용 4가지 규칙
		1. new로 대입하지 않은 메모리를 delete로 해제할 수 없음
		2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없음
		3. new[]로 메모리를 대입할 경우 delete[]로 해제함
		4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야함.
	*/
	double* p3 = new double[3]; //double형 데이터 3개를 저장할 수 있는 공간을 대입
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] = " << p3[1] << ".\n";

	p3 = p3 + 1;	// 포인터를 증가시킴[단순 배열의 이름일 경우에는 틀린 표현]

	cout << "now p3[0] = " << p3[0] << " and";
	cout << "p3[1] = " << p3[1] << "\n";

	p3 = p3 - 1;	// 다시 시작 위치를 지시함
	delete[] p3;	// 배열 메모리를 해제함

	return 0;
}