/**
 * File Name:   main.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/5 23:33
**/
#include <iostream>
#include "../../util/Evaluate.h"
#include "../../util/RandMatrix.h"

using namespace std;

template<typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {

    int n=1000000;
    int *a = RandMatrix::generateIntRandomArray(n,0,n);
    Evaluate::sortTime("Selection Sort",selectionSort,a,n);
    delete[] a;

    return 0;
}
