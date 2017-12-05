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

template <typename T>
void insertionSort(T arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }else{
                break;
            }
        }
    }
}

int main(){
    int n=1000;
    int *arr1 = MatrixUtil::generateIntRandomArray(n,0,n);
    int *arr2 = MatrixUtil::copyIntArray(arr1,n);

    clock_t startInsertTime = clock();
    EvaluateUtil::sortTime("InsertionSort",insertionSort,arr1,n);
    clock_t endInsertTime = clock();
    cout << "InsertTime: "<<double(endInsertTime-startInsertTime+1)/CLOCKS_PER_SEC<<" s"<<endl;

    clock_t startSelectTime = clock();
    EvaluateUtil::sortTime("SelectionSort",selectionSort,arr2,n);
    clock_t endSelectTime = clock();
    cout << "SelectTime: "<<double(endSelectTime-startSelectTime+1)/CLOCKS_PER_SEC<<" s"<<endl;
}

