/**
 * File Name:   6_17.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/3 16:07
**/

#include <iostream>

using namespace std;

int count_all()
{
    static int ctr = 0;
    return ++ctr;
}

int main()
{
    for(int i=0;i<10;i++)
        cout << count_all() << endl;
    return 0;
}

