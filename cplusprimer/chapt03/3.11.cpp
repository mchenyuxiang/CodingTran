/**********************************************************
 * Author        : mchenyuxiang
 * Email         : mchenyuxiang@163.com
 * Blog          : www.playdba.com
 * Last modified : 2017-03-06 14:55
 * Filename      : 3.11.cpp
 * Description   : 
 * *******************************************************/

#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{

	const string s = "Keep out!";
	for (auto &c:s){
	
		cout << c << ":" << typeid(c).name() << endl;
		
	}
}
