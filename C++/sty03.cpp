#include <iostream>
 

using namespace std;

int main() {

	// 원의 넓이 공식: r * r * 3.14
	int r = 3;
	
	// 상수 사용시 값을 초기화 해서 사용해야함.
	const float PIE = 3.14;

	float round = r * r * PIE;

	cout << round;

	return 0;
}