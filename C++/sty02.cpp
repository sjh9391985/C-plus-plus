#include <iostream> // ��ó�� ������
#include <climits>
using namespace std;

int main() {
	// ������: �Ҽ��ΰ� ���� ��
	// ���� ����, 0, ���� ����
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

	// unsigned : ���� ���� ���� X, ���� ��������� �翡 ���ϱ⿡ ũ�Ⱑ Ŀ��.

	// �Ǽ���: �Ҽ��ΰ� �ִ� ��
	float a = 3.14;
	cout << a;

	return 0;
}