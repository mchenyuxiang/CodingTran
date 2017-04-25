/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-04-25 15:20
 * Filename      : 4_11.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>

using namespace std;

int main()
{

	int a,b,c,d;
	cin >> a >> b >> c >> d;
	while(!(a>b && b > c && c > d)){
	
	if(a > b && b > c && c > d){
	
		cout << "满足要求" << endl;
	}else{
	
		cout << "不满足要求，请重新输入" << endl;
		cin >> a >> b >> c >> d;

	}
	}
		cout << "满足要求" << endl;
	return 0;
}
