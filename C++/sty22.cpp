#include <iostream>

using namespace std;

class Stock
{

public:
	Stock();
	~Stock();
	void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();

private:
	string name;
	int shares; 
	float share_val;
	double total_val;
	void set_total() { 
		total_val = shares * share_val; 
	}
};

void Stock::acquire(string co, int n, float pr) {
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

void Stock::buy(int n , float pr) {
	shares += n;
	share_val = pr;
	set_total();
}

void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}

void Stock::update(float pr) {
	share_val = pr;
	set_total();
}

void Stock::show() {
	cout << "ȸ�� �� = " << name << endl;
	cout << "�ֽ� �� = " << shares << endl;
	cout << "�ְ� = " << share_val << endl;
	cout << "�ֽ� �� ��ġ = " << total_val << endl;
}

// ��� ���� ���� ������ ::
Stock::Stock()
{
}

Stock::~Stock()
{
}

int main() {
	/* 
		�߻�ȭ�� Ŭ����
		- ��� ��ü�� ��������� ǥ���ϴ� ���� �ƴ϶�,
		  ����� Ư¡�� ������ �������, �����ϱ� ���� ǥ���ϴ� ��.
	*/

	/*
		1. Ŭ���� ����
	*/
	Stock temp;
	temp.acquire("Panda", 100, 100);
	temp.show();
	temp.buy(10, 100);

	return 0;
}