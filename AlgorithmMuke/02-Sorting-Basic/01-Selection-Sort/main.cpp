/**
 * File Name:   main.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/11/16 1:58
**/
#include <iostream>

using namespace std;

void selectionSort( int arr[], int n){
    for(int i=0;i<n;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

int main(){

    int a[10] = {9,3,4,5,6,7,8,2,1,10};
    selectionSort(a,10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
