#include "main.h"

#include <iostream>

using namespace std;

int InsertionSort(int a[], int size);

int InsertionSortTest() {
	int a[10] = { 5,3,2,8,9,7,6,1,10,4 };
	InsertionSort(a, 10);
	for (int i = 0; i < 10; i++)
		cout << a[i] << endl;
	return 0;
}

int InsertionSort(int a[], int size) {
	for(int i=1;i<size;++i)
		for (int j = 0; j < i; ++j) {
			if (a[j] > a[i]) {
				int tmp = a[i];
				for (int k = i; k > j; --k)
					a[k] = a[k - 1];
				a[j] = tmp;
				break;
			}
		}
	return 0;
}