#include <iostream>
#include <cstring> // strlen(): ���ڿ��� ���̸� ��ȯ�ϴ� �Լ��� ����ϱ� ����

using namespace std;

int main() {

	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programing";

	// ����ڰ� �Է��Ѱ��� ������ �迭������ ������ ��.
	cin >> name1;

	// cout�� �迭�� null���ڱ����� ����� �մϴ�.

	// cin.getline(�Է��� ���� ����, �ִ�ũ��): ������ �����ؼ� ������ �� �� ����.
	cin.getline(name1, Size);
	return 0;
}