#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct MyStruct
{
	char name[20];
	int age;
};

int main() {

	/*
		동적 구조체 생성
		temp* ps = new temp;
	*/ 

	MyStruct* temp = new MyStruct;
	cout << "이름을 입력하세요 = ";
	cin >> temp->name; // 화살표를 통해 구조체 멤버에 접근

	cout << "나이를 입력하세요 = ";
	cin >> (*temp).age; // 화살표와 동일한 의미로 사용됨

	cout << temp->name << endl;
	cout << temp->age;

	return 0;
}