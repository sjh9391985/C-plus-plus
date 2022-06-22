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
	cout << "회사 명 = " << name << endl;
	cout << "주식 수 = " << shares << endl;
	cout << "주가 = " << share_val << endl;
	cout << "주식 총 가치 = " << total_val << endl;
}

// 사용 범위 결정 연산자 ::
Stock::Stock()
{
}

Stock::~Stock()
{
}

int main() {
	/* 
		추상화와 클래스
		- 어떠한 객체를 사실적으로 표현하는 것이 아니라,
		  공통된 특징을 간결한 방식으로, 이해하기 쉽게 표현하는 것.
	*/

	/*
		1. 클래스 선언
	*/
	Stock temp;
	temp.acquire("Panda", 100, 100);
	temp.show();
	temp.buy(10, 100);

	return 0;
}