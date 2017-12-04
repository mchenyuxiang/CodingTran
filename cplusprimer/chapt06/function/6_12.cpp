/**
 * File Name:   6_12.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/4 12:46
**/
#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int a = 3, b = 5;
    swap(a, b);
    cout << "a=" << a << " " << "b=" << b << endl;
}

