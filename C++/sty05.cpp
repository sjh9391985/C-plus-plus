#include <iostream>


using namespace std;

int main() {

	/*
		배열: 같은 데이터형의 집합
		typeName arrayName[arraySize]
	*/

	// 배열의 크기를 지정하지 않은 경우 값에 따라 크기가 변동됨.
	int num[] = { 1,2,3 };

	// 배열의 마지막 Null 처리를 해줌.
	char chr[6] = { 'h', 'e', 'l', 'l', 'o', '\0' };

	return 0;
}