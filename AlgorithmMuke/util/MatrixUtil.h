/**
 * File Name:   RandMatrix.h
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/5 23:24
 * Description: 生成随机数工具
**/

#ifndef ALGORITHMMUKE_RANDMATRIX_H
#define ALGORITHMMUKE_RANDMATRIX_H

#include <iostream>
#include <ctime>
#include <cassert>

using namespace std;

namespace MatrixUtil {

    // 生成有n个元素的随机数组，每个元素的随机范围为[rangeL,rangeR]
    int *generateIntRandomArray(int n, int rangL, int rangR) {

        assert(rangL <= rangR);

        int *arr = new int[n];

        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % (rangR - rangL + 1) + rangL;
        }
        return arr;
    }

    // 拷贝数组元素
    int *copyIntArray(int a[],int n){

        int *arr = new int[n];
        copy(a,a+n,arr);
        return arr;
    }
}

#endif //ALGORITHMMUKE_RANDMATRIX_H
