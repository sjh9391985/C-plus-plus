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
		���� ����ü ����
		temp* ps = new temp;
	*/ 

	MyStruct* temp = new MyStruct;
	cout << "�̸��� �Է��ϼ��� = ";
	cin >> temp->name; // ȭ��ǥ�� ���� ����ü ����� ����

	cout << "���̸� �Է��ϼ��� = ";
	cin >> (*temp).age; // ȭ��ǥ�� ������ �ǹ̷� ����

	cout << temp->name << endl;
	cout << temp->age;

	return 0;
}