/**
 * File Name:   BubbleSort.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/8 1:28
**/
#include <iostream>
#include "../../util/MatrixUtil.h"
#include "../../util/PrintUtil.h"
#include "../../util/EvaluateUtil.h"

using namespace std;

template <typename T>
void bubbleSort(T a[],int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
    }
}

template <typename T>
void bubbleSortAdvance(T a[],int n){
    bool swapped;
    do{
        swapped = false;
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                swap(a[i],a[i-1]);
                swapped = true;
            }
        }
        n--;
    }while(swapped);
}

int main(){
    int n=100000;

    // 一般测试
    int *arr1 = MatrixUtil::generateIntRandomArray(n,0,n);
    int *arr2 = MatrixUtil::copyIntArray(arr1,n);

    EvaluateUtil::sortTime("Bubble Sort",bubbleSort,arr1,n);
    EvaluateUtil::sortTime("Bubble Advance Sort",bubbleSortAdvance,arr2,n);

    delete[] arr1;
    delete[] arr2;

    // 近乎有序测试
    arr1 = MatrixUtil::generateNearlyOrderedArray(n,100);
    arr2 = MatrixUtil::copyIntArray(arr1,n);

    EvaluateUtil::sortTime("Bubble Sort",bubbleSort,arr1,n);
    EvaluateUtil::sortTime("Bubble Advance Sort",bubbleSortAdvance,arr2,n);

    delete[] arr1;
    delete[] arr2;
}
