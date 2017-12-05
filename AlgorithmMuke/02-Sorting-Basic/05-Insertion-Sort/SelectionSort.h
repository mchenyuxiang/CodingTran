/**
 * File Name:   SelectionSort.h
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/6 2:17
**/

#ifndef ALGORITHMMUKE_SELECTIONSORT_H
#define ALGORITHMMUKE_SELECTIONSORT_H
#include <iostream>
#include <algorithm>

using namespace std;


template<typename T>
void selectionSort(T arr[], int n){

    for(int i = 0 ; i < n ; i ++){

        int minIndex = i;
        for( int j = i + 1 ; j < n ; j ++ )
            if( arr[j] < arr[minIndex] )
                minIndex = j;

        swap( arr[i] , arr[minIndex] );
    }
}

#endif //ALGORITHMMUKE_SELECTIONSORT_H
