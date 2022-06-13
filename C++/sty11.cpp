#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

#define SIZE 20
int main() {

	char animal[SIZE];
	char* ps;

	cout << "동물 이름 입력\n";
	cin >> animal;

	// 실행 시간에 배열의 크기를 결정 할 수 있음.
	ps = new char[strlen(animal) + 1]; // () 로 둘러싸인 변수의 크기를 반환하는 함수.
	strcpy(ps, animal); // animal의 값을 ps에 복사하는 역할을 함.

	cout << "입력한 동물 이름 복사완료" << endl;
	cout << "입력한 동물 이름 = " << animal << "/ 주소 = " << (int*)animal << endl;
	cout << "복사된 동물 이름 = " << ps << "/ 주소 = " << (int*)ps << endl;

	return 0;
}