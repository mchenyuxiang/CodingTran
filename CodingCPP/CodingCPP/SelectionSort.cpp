#include "main.h"

#include <iostream>

using namespace std;

int SelectionSort(int a[],int size);

int SelectionSortTest() {
	int a[10] = { 5,3,2,8,9,7,6,1,10,4 };
	SelectionSort(a, 10);
	for (int i = 0; i < 10; i++)
		cout << a[i] << endl;

	return 0;
}

int SelectionSort(int a[],int size) {
	for (int i = 0; i < size - 1; ++i) {
		int tmpMin = i;
		for (int j = i + 1; j < size; ++j) {
			if (a[j] < a[tmpMin]) {
				tmpMin = j;
			}
		}
		int tmp = a[i];
		a[i] = a[tmpMin];
		a[tmpMin] = tmp;
	}
	return 0;
}