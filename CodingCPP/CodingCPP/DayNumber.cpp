#include "main.h"

#include <iostream>

using namespace std;

int monthDays[13] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };

int dayNumber()
{
	int year, month, date;
	int days = 0;
	cin >> year >> month >> date;
	for (int y = 2012; y < year; ++y) {
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
			days += 366;
		else
			days += 365;
	}
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		monthDays[2] = 29;
	for (int m = 1; m < month; ++m)
		days += monthDays[m];
	days += date;
	days -= 22;
	cout << days % 7 << endl;
	return 0;
}