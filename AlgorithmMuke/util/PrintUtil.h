/**
 * File Name:   PrintUtil.h
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/5 23:20
 * Description: 打印工具函数
**/

#ifndef CPLUSPRIMER_PRINTUTIL_H
#define CPLUSPRIMER_PRINTUTIL_H

#include <iostream>
//#include <ctime>
//#include <cassert>

using namespace std;

namespace PrintUtil{

    //打印一维arr数组里的所有内容
    template <typename T>
    void printOneArray(T arr[], int n){
        for(int i=0;i < n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

}

#endif //CPLUSPRIMER_PRINTUTIL_H
