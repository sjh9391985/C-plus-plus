#include <iostream> // 전처리 지시자
#include <climits>
using namespace std;

int main() {
	// 정수형: 소수부가 없는 수
	// 음의 정수, 0, 양의 정수
	// short, int, long, long long

	short n_short = SHRT_MAX;
	int n_int = INT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << n_short << endl;
	cout << sizeof n_short << endl;
	cout << n_int << endl;
	cout << sizeof n_int << endl;
	cout << n_long <<3 endl;
	cout << sizeof n_long << endl;
	cout << n_llong << endl;
	cout << sizeof n_llong << endl;

	// unsigned : 음의 값을 저장 X, 음의 저장공간을 양에 더하기에 크기가 커짐.

	// 실수형: 소수부가 있는 수
	float a = 3.14;
	cout << a;

	return 0;
}