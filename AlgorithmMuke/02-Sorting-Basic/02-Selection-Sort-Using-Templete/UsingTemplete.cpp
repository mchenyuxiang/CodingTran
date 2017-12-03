/**
 * File Name:   UsingTemplete.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/11/16 2:22
**/
#include <iostream>
#include "Student.h"

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

    int a[10] = {9, 3, 4, 5, 6, 7, 8, 2, 1, 10};
    selectionSort(a, 10);
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;

    string c[4] = {"D","B","A","C"};
    selectionSort(c,4);
    for(int i = 0; i < 4; i++)
        cout << c[i] << " ";
    cout << endl;

    // 测试模板函数，传入自定义结构体Student数组
    Student d[4] = { {"D",90} , {"C",100} , {"B",95} , {"A",95} };
    selectionSort(d,4);
    for( int i = 0 ; i < 4 ; i ++ )
        cout<<d[i];
    cout<<endl;

    return 0;
}
