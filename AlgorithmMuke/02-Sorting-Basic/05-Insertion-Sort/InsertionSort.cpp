/**
 * File Name:   InsertionSort.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/6 2:00
**/

#include <iostream>
#include <ctime>
#include "SelectionSort.h"
#include "../../util/MatrixUtil.h"
#include "../../util/EvaluateUtil.h"

using namespace std;

template<typename T>
void insertionSort(T arr[], int n) {
//    for(int i=1;i<n;i++){
//        for(int j=i;j>0;j--){
//            if(arr[j]<arr[j-1]){
//                swap(arr[j], arr[j-1]);
//            }else{
//                break;
//            }
//        }
//    }

    // 改进，如果直接找到小位置才放进去
    for (int i = 1; i < n; i++) {

        T e = arr[i];
        int j;
        for (j = i; j > 0; j--) {
            if (e < arr[j - 1]) {
                arr[j] = arr[j - 1];
            } else {
                break;
            }
        }
        arr[j] = e;
    }
}

int main() {
    int n = 10000;
    int *arr1 = MatrixUtil::generateNearlyOrderedArray(n, 100);
    int *arr2 = MatrixUtil::copyIntArray(arr1, n);

    EvaluateUtil::sortTime("InsertionSort", insertionSort, arr1, n);

    EvaluateUtil::sortTime("SelectionSort", selectionSort, arr2, n);
}

