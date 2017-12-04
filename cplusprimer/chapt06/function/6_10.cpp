/**
 * File Name:   6_10.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/3 17:17
**/

#include <iostream>
#include "../header/Chapter6.h"
#include "Chapter6.cpp"

using namespace std;

int main()
{
    int a=6,b=10;
    swap(&a,&b);
    cout << "a=" << a << " " << "b="<<b<<endl;
}
