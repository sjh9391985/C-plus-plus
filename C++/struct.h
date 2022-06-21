#ifndef STRUCT // STRUCT가 정의되지 않은 부분에만 이 파일을 사용

#include <iostream>

using namespace std;

/*
	헤더파일
	1. 함수의 원형
	2. #define, const를 사용하는 기호 상수
	3. 구조체 선언
	4. 클래스 선언
	5. 템플릿 선언
	6. 인라인 선언
*/
struct MyStruct
{
	string name;
	int age;
};

void display(MyStruct&);

#endif // !STRUCT