/**
 * File Name:   BubbleSort.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/8 1:28
**/
#include <iostream>
#include "../../util/MatrixUtil.h"
#include "../../util/PrintUtil.h"

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

int main(){
    int n=10;
    int *arr = MatrixUtil::generateIntRandomArray(n,0,n);

    PrintUtil::printOneArray(arr,n);
    bubbleSort(arr,n);
    PrintUtil::printOneArray(arr,n);
}
