/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-03-06 14:49
 * Filename      : 3.10.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{

	string line,line1;
	cin >> line;
	for(auto &a:line){
			
		if(ispunct(a)){
			continue;
		}
		line1=line1+a;
	}
	cout << line1 << endl;
}
