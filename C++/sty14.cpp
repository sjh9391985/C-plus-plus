#include <iostream>

using namespace std;

struct Time
{
	int hours;
	int mins;
};

const int minPerHr = 60;

Time sum(Time*, Time*);
void showTime(Time);

int main() {
	Time day1 = { 5,45 };
	Time day2 = { 4, 55 };

	Time total = sum(&day1, &day2);

	showTime(total);

	return 0;
}

Time sum(Time* t1, Time* t2) {
	Time total;

	/*
		값에서 멤버로 접근할 때 : '.'
		주소에서 멤버로 접근할 때 : '->'
	*/
	total.mins = (t1->mins + t2->mins) % minPerHr;
	total.hours = t1->hours + t2->hours + (t1->mins + t2->mins) % minPerHr;

	return total;
}

void showTime(Time t1) {
	cout << t1.hours << endl;
	cout << t1.mins << endl;
}