/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-03-02 13:40
 * Filename      : 1_11.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>

using namespace std;

int main()
{

	cout << "Please input two number:" << endl;
	int a,b;
	cin >> a >> b;
	int t;
	if(a>b){
		t = a;
		a = b;
		b = t;
	}
	int val = a;
	while(val <= b){
		cout << val <<endl;
		val ++;
	
	}
}
