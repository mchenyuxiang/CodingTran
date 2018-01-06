//
// Created by yuxiang on 2018/1/6.
//
#include <iostream>
#include "../../util/MatrixUtil.h"
#include "../../util/EvaluateUtil.h"

// l为左空间的起始位置，r为右空间的结束位置，arr的地址区间为[l,r]
template <typename T>
void __merge(T arr[], int l, int mid, int r){
    T aux[r-l+1]; // 开辟数组空间

    for(int i=l; i<=r; i++){
        aux[i-l] = arr[i];
    }

    int i=l,j=mid+1;
    for(int k=l; k<=r; k++){
        if(i>mid){
            arr[k] = aux[j-l];
            j++;
        }else if(j>r){
            arr[k] = aux[i-l];
            i++;
        }else if(aux[i-l]>aux[j-l]){
            arr[k] = aux[j-l];
            j++;
        }else{
            arr[k] = aux[i-l];
            i++;
        }
    }
}

template <typename T>
void __mergeSort(T arr[],int l,int r){
    if(l>=r)
        return;

    int mid = (l+r)/2;
    __mergeSort(arr,l,mid);
    __mergeSort(arr,mid+1,r);
    __merge(arr,l,mid,r);

}

template <typename T>
void mergeSort(T arr[], int n){

    __mergeSort(arr,0,n-1);
}

int main(){
    int n=100000;

    // 一般测试
    int *arr1 = MatrixUtil::generateIntRandomArray(n,0,n);
//    int *arr2 = MatrixUtil::copyIntArray(arr1,n);

    EvaluateUtil::sortTime("Merge Sort",mergeSort,arr1,n);

    delete[] arr1;
}

