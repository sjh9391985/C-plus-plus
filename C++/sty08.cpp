#include <iostream>
#include <cstring> 

using namespace std;

int main() {

	// ����ü(union)
	// ���� �ٸ� ���������� �� ���� �� ������ ������ �� ����.
	union MyUnion {
		int intVal;
		long longVal;
		float floatVal;
	};

	/*
		����ü�� �޸� ����ü�� �ѹ��� �Ѱ��� ���������� ������ ����
		���� ���������� ����� ���������� ���ÿ� ���Ұ�
		����: �޸� ����
	*/
	MyUnion test;
	test.intVal = 3;
	test.longVal = 33;
	test.floatVal = 3.3;

	
	//	����ü(enum)
	//	��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���
	enum spectrum { red, orange, yellow, green, blue, violet, indigo, ultraviolet };
	/*
		1. spectrum�� ���ο� �������� �̸����� ����ϴ�.
		2. red, orange, yellow .. 0�������� 7���� ���� ���� ���� ��Ÿ���� ��ȣ ����� ����ϴ�.

	*/
	
	spectrum a = orange; //�����ڵ鳢���� ����� ����X
	int temp = blue; // ���� ������ Ÿ�Կ� �����ڸ� ���� �Ҽ�����

	enum spectrum1 { red = 0, orange = 1, yellow = 4, green, blue, violet, indigo, ultraviolet };
	/*
		������ �����͸� �ʱ�ȭ �� �� ����
		�ʱ�ȭ���� ���� �����ʹ� ���� 1�� ���ؼ� ���� ��
	*/

	return 0;