#include "struct.h"

// 헤더 파일을 여러 파일에 포함시킬 경우, 단 한 번만 포함시켜야 한다.

/*
	컴파일 분할의 장점
	1. 코드의 재사용성
*/
int main() {

	MyStruct pandacoding = {
		"Panda", 26
	};

	display(pandacoding);

	return 0;
}
