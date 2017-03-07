/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-03-07 15:59
 * Filename      : 3_35.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>

using namespace std;

int main()
{

	int arr[10]={1};
	int *p = arr;
	for(int i=0; i<10; i++){
		*(p+i)=0;
		cout << arr[i] << endl;
	}
}
