#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

#define SIZE 20
int main() {

	char animal[SIZE];
	char* ps;

	cout << "���� �̸� �Է�\n";
	cin >> animal;

	// ���� �ð��� �迭�� ũ�⸦ ���� �� �� ����.
	ps = new char[strlen(animal) + 1]; // () �� �ѷ����� ������ ũ�⸦ ��ȯ�ϴ� �Լ�.
	strcpy(ps, animal); // animal�� ���� ps�� �����ϴ� ������ ��.

	cout << "�Է��� ���� �̸� ����Ϸ�" << endl;
	cout << "�Է��� ���� �̸� = " << animal << "/ �ּ� = " << (int*)animal << endl;
	cout << "����� ���� �̸� = " << ps << "/ �ּ� = " << (int*)ps << endl;

	return 0;
}