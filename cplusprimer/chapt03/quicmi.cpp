/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-03-07 17:01
 * Filename      : quicmi.cpp
 * Description   : 
 * *******************************************************/
#include <iostream>

using namespace std;

int quickmi(int a,int b){
	int ans = 1,base = a;
	while(b!=0){
	
		if((b&1)!=0){
			ans *= base;
		}
		base *= base;
		b >>= 1;
	}
	return ans;
}

int main(){
	int result = quickmi(3,11);
	cout << result << endl;
}
