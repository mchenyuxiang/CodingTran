/**
 * File Name:   main.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/5 23:33
**/
#include <iostream>
#include "../../util/EvaluateUtil.h"
#include "../../util/MatrixUtil.h"

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

    int n=10000;
    int *a = MatrixUtil::generateIntRandomArray(n,0,n);
    EvaluateUtil::sortTime("Selection Sort",selectionSort,a,n);
    delete[] a;

    return 0;
}
