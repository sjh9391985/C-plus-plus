#include <iostream>
#include <cstring> 

using namespace std;

int main() {
	// 구조체 : 다른 데이터형이 허용되는 데이터의 집합
	// => 사용자가 정의한 새로운 데이터형을 만드는것.
	
	// 배열   : 같은 데이터형의 집합

	// 구조체 선언
	struct MyStruct
	{
		string name;
		string position;
		int  height;
		int  weight;
	};

	MyStruct A{ // ',' 기준으로 각각의 데이터를 초기화해줌.
		"Son",
		"Striker",
		183,
		77
	};

	/*
		MyStruct A; A는 구조체의 정보를 담고있습니다.
		A.name = "Son";
		A.position = "Striker";
		A.height = 183;
		A.weight = 77;
	*/

	// 구조체 배열 선언 방식
	MyStruct B[2] = {
		{"A", "A", 1, 1},
		{"B", "B", 2, 2}
	};

	B[0].height; // 이런식으로 접근을 할수있음.

	return 0;
}