#include <iostream>
#include <cstring> 

using namespace std;

int main() {
	// ����ü : �ٸ� ���������� ���Ǵ� �������� ����
	// => ����ڰ� ������ ���ο� ���������� ����°�.
	
	// �迭   : ���� ���������� ����

	// ����ü ����
	struct MyStruct
	{
		string name;
		string position;
		int  height;
		int  weight;
	};

	MyStruct A{ // ',' �������� ������ �����͸� �ʱ�ȭ����.
		"Son",
		"Striker",
		183,
		77
	};

	/*
		MyStruct A; A�� ����ü�� ������ ����ֽ��ϴ�.
		A.name = "Son";
		A.position = "Striker";
		A.height = 183;
		A.weight = 77;
	*/

	// ����ü �迭 ���� ���
	MyStruct B[2] = {
		{"A", "A", 1, 1},
		{"B", "B", 2, 2}
	};

	B[0].height; // �̷������� ������ �Ҽ�����.

	return 0;
}