/**
 * File Name:   Evaluate.h
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/5 23:38
**/

#ifndef ALGORITHMMUKE_EVALUATE_H
#define ALGORITHMMUKE_EVALUATE_H

#include <iostream>
#include <ctime>
#include <cassert>
#include <string>

using namespace std;

namespace Evaluate {

    // 判断数组是否是升序
    template<typename T>
    bool isAscendArray(T arr, int n) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1])
                return false;
        }
        return true;
    }

    // 测试sort排序算法的时间性能
    template<typename T>
    void sortTime(const string &sortName, void (*sort)(T[], int), T arr[], int n) {

        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();

        assert(isAscendArray(arr, n));
        cout << sortName << ": " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
        return;
    }
}

#endif //ALGORITHMMUKE_EVALUATE_H
