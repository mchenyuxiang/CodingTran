#include "main.h"

#include <iostream>

using namespace std;

int BinarySearch(int a[], int size, int p);

int a[10] = { 1,2,3,4,5,6,7,8,9,10 };

int BinarySearchTest(){
	int p = 3;
	int size = 10;
	int loc = -10;
	loc = BinarySearch(a, size, p);
	cout << loc << endl;
	return 0;
}

int BinarySearch(int a[], int size, int p) {
	int L = 0;
	int R = size - 1;
	while (L <= R) {
		int mid = L + (R - L) / 2;
		if (p == a[mid])
			return mid;
		else if (p > a[mid])
			L = mid + 1;
		else
			R = mid - 1;
	}
	return -1;
}