#include "main.h"

#include <iostream>

using namespace std;

int LowBound(int a[], int size, int p);


int LowBoundTest() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = 10;
	int p = 8;
	int loc = -1;
	loc = LowBound(a,size,p);
	cout << loc+1 << endl;
	return 0;
}

int LowBound(int a[], int size, int p) {
	int L = 0;
	int R = size - 1;
	int lastPos = -1;
	while (L <= R) {
		int mid = L + (R - L) / 2;
		if (a[mid] >= p)
			R = mid - 1;
		else {
			lastPos = mid;
			L = mid + 1;
		}
	}
	return lastPos;
}