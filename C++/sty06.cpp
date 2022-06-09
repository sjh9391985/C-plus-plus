#include <iostream>
#include <cstring> // strlen(): 문자열의 길이를 반환하는 함수를 사용하기 위함

using namespace std;

int main() {

	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programing";

	// 사용자가 입력한것을 우측의 배열변수에 저장을 함.
	cin >> name1;

	// cout은 배열의 null문자까지만 출력을 합니다.

	// cin.getline(입력을 받을 변수, 최대크기): 공백을 포함해서 저장을 할 수 있음.
	cin.getline(name1, Size);
	return 0;
}