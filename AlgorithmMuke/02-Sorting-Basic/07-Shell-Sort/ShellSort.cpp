/**
 * File Name:   ShellSort.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/8 11:51
**/
#include <iostream>
#include "../../util/MatrixUtil.h"
#include "../../util/EvaluateUtil.h"

using namespace std;

template <typename T>
void shellSort(T a[],int n){
    int h=1;
    while(h<n/3)
        h = 3*h+1;
    while(h>=1){
        for(int i=h;i<n;i++){
            T e = a[i];
            int j;
            for(j=i;j>=h&&e<a[j-h];j-=h){
                a[j] = a[j-h];
            }
            a[j] = e;
        }
        h /= 3;
        cout << "h: "<<h<<endl;
    }
}

int main(){
    int n=100000;

    // 一般测试
    int *arr1 = MatrixUtil::generateIntRandomArray(n,0,n);
//    int *arr2 = MatrixUtil::copyIntArray(arr1,n);

    EvaluateUtil::sortTime("Bubble Sort",shellSort,arr1,n);
//    EvaluateUtil::sortTime("Bubble Advance Sort",shellSort,arr2,n);

    delete[] arr1;
//    delete[] arr2;

    // 近乎有序测试
    arr1 = MatrixUtil::generateNearlyOrderedArray(n,100);
//    arr2 = MatrixUtil::copyIntArray(arr1,n);

    EvaluateUtil::sortTime("Bubble Sort",shellSort,arr1,n);
//    EvaluateUtil::sortTime("Bubble Advance Sort",shellSort,arr2,n);

    delete[] arr1;
//    delete[] arr2;
}
