/**
 * File Name:   6_11.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/4 12:27
**/

#include <iostream>

using namespace std;

void reset(int &a)
{
    a=0
}

int main()
{
    int a=6;
    reset(a);
    cout << "a="<<a<<endl;
}
