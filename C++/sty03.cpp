#include <iostream>
 

using namespace std;

int main() {

	// ���� ���� ����: r * r * 3.14
	int r = 3;
	
	// ��� ���� ���� �ʱ�ȭ �ؼ� ����ؾ���.
	const float PIE = 3.14;

	float round = r * r * PIE;

	cout << round;

	return 0;
}