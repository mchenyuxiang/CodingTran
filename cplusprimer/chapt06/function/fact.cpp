//
// Created by mchenyuxiang on 2017/4/26.
//
#include "../header/Chapter6.h"

using namespace std;

int fact(int val){
    if(val < 0)
        return -1;
    int ret = 1;
    for(int i=1; i != val+1;i++)
        ret *= i;
    return ret;
}

