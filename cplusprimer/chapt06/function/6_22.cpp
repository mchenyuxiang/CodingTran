/**
 * File Name:   6_22.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/4 13:37
**/
#include <iostream>

using namespace std;

void swap_point(int *&a,int *&b){
    int *t = a;
    a = b;
    b = t;
}

int main(){
    int val1=10,val2=4;
    int *p1=&val1,*p2=&val2;
    swap_point(p1,p2);
    cout << "a="<<*p1<<" "<<"b="<<*p2<<endl;
    return 0;
}

