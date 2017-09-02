#include "main.h"
#include <iostream>

using namespace std;

int devide()
{
	int a = 10;
	int b = 3;
	double d = a / b;
	cout << d << endl;
	d = 5 / 2;
	cout << d << endl;
	d = 5 / 2.0;
	cout << d << endl;
	d = (double)a / b;
	cout << d << endl;
	return 0;
}