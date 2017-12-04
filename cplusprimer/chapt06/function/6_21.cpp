/**
 * File Name:   6_21.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/4 13:34
**/
#include <iostream>

using namespace std;

int compare(int &a,int *b){
    return a>(*b)?a:*b;
}

int main(){
    int a=10,b=4;
    cout << compare(a,&b) << endl;
    return 0;
}

